class Solution {
public:
    // 递归：先处理后继链表，再决定当前节点是否保留。
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return nullptr;
        head->next = removeElements(head->next, val);
        return head->val == val ? head->next : head;
    }
};
