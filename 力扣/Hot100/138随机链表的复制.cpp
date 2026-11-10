class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* oriNode = head;
        unordered_map<Node*, Node*>mp;
        while(oriNode){
            Node* newNode = new Node(oriNode->val);
            mp[oriNode] = newNode;
            oriNode = oriNode->next;
        }
        oriNode = head;
        while(oriNode){
            mp[oriNode]->next = mp[oriNode->next];
            mp[oriNode]->random = mp[oriNode->random];
            oriNode = oriNode->next;       
        }
        return mp[head];
    }
};
