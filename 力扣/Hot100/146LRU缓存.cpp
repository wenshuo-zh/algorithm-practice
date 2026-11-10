class LRUCache {
public:
    struct Node{
        int key;
        int val;
        Node* next;
        Node* prev;
        Node(int k, int v):key(k), val(v), next(nullptr), prev(nullptr){}
    };
    unordered_map<int, Node*> mp;
    int l_capacity;//容量
    Node* dummyHead;
    Node* dummyTail;
    //删除指定节点
    void removeNode(Node* node){
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }
    //头插新节点
    void addToHead(Node* node){
        node->next = dummyHead->next;
        node->prev = dummyHead;
        dummyHead->next->prev = node;
        dummyHead->next = node;
    }
    //构造函数
    LRUCache(int capacity) {
        this->l_capacity = capacity;
        dummyHead = new Node(0, 0);
        dummyTail = new Node(0, 0);
        dummyHead->next = dummyTail;
        dummyTail->prev = dummyHead; 
    }
    
    int get(int key) {
        if(mp.find(key) == mp.end()) return -1;
        Node* n = mp[key];
        removeNode(n);
        addToHead(n);
        return n->val;
    }
    
    void put(int key, int value) {
        if(mp.find(key) == mp.end()){
            Node* newNode = new Node(key, value);
            mp[key] = newNode;
            addToHead(newNode);
            if(mp.size() > l_capacity){
                Node* last = dummyTail->prev;
                mp.erase(last->key);
                removeNode(last);
                delete last;
            }
        }
        else{
            removeNode(mp[key]);
            mp[key]->val = value;
            addToHead(mp[key]);
        }
    }
};
