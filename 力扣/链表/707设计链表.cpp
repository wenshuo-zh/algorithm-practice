class MyLinkedList {
private:
    struct ListNode {
        int val;
        ListNode* next;

        explicit ListNode(int value) : val(value), next(nullptr) {}
    };

    ListNode* dummyHead;
    int size;

public:
    MyLinkedList() : dummyHead(new ListNode(0)), size(0) {}

    ~MyLinkedList() {
        while (dummyHead != nullptr) {
            ListNode* node = dummyHead;
            dummyHead = dummyHead->next;
            delete node;
        }
    }

    int get(int index) {
        if (index < 0 || index >= size) {
            return -1;
        }
        ListNode* cur = dummyHead->next;
        while (index-- > 0) {
            cur = cur->next;
        }
        return cur->val;
    }

    void addAtHead(int val) {
        addAtIndex(0, val);
    }

    void addAtTail(int val) {
        addAtIndex(size, val);
    }

    void addAtIndex(int index, int val) {
        if (index > size) {
            return;
        }
        if (index < 0) {
            index = 0;
        }

        ListNode* pre = dummyHead;
        while (index-- > 0) {
            pre = pre->next;
        }
        ListNode* node = new ListNode(val);
        node->next = pre->next;
        pre->next = node;
        ++size;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) {
            return;
        }

        ListNode* pre = dummyHead;
        while (index-- > 0) {
            pre = pre->next;
        }
        ListNode* node = pre->next;
        pre->next = node->next;
        delete node;
        --size;
    }
};
