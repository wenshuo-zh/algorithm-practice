class Solution {
public:
    // 复制节点后头插，不修改原链表，但需要 O(n) 额外空间。
    ListNode* reverseList(ListNode* head) {
        ListNode dummyHead;
        for(ListNode* cur = head; cur != nullptr; cur = cur->next){
            ListNode* node = new ListNode(cur->val);
            node->next = dummyHead.next;
            dummyHead.next = node;
        }
        return dummyHead.next;
    }
};
