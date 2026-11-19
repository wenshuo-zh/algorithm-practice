class Trie {
public:
    struct Trienode{
        Trienode* next[26];
        bool isEnd;
        Trienode() {
            for(int i = 0; i < 26; i++){
                next[i] = nullptr;
            }
            isEnd = false;
        }
    };
    Trienode* dummyRoot;
    
    Trie() {
        dummyRoot = new Trienode();
    }
    
    void insert(string word) {
        Trienode* cur = dummyRoot;
        for(int i = 0; i < word.size(); i++){
            int nextIndex = word[i]-'a';
        if(!cur->next[nextIndex]){
            cur->next[nextIndex] = new Trienode();
        }
        cur = cur->next[nextIndex];
        }
        cur->isEnd = true;
    }
    
    bool search(string word) {
        Trienode* cur = dummyRoot;
        for(int i = 0; i < word.size(); i++){
            int nextIndex = word[i]-'a';
            if(!cur->next[nextIndex]){
                return false;
            }
            cur = cur->next[nextIndex];
        }
        return cur->isEnd;
    }
    
    bool startsWith(string prefix) {
        Trienode* cur = dummyRoot;
        for(int i = 0; i < prefix.size(); i++){
            int nextIndex = prefix[i]-'a';
            if(!cur->next[nextIndex]){
                return false;
            }
            cur = cur->next[nextIndex];
        }
        return true;
    }
};
