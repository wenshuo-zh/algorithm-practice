class Solution {
public:
    // 头插法：复用原链表节点，虚头节点的 next 始终是新链表头。
    ListNode* reverseList(ListNode* head) {
        ListNode dummyHead;
        ListNode* cur = head;
        while(cur != nullptr){
            ListNode* next = cur->next;
            cur->next = dummyHead.next;
            dummyHead.next = cur;
            cur = next;
        }
        return dummyHead.next;
    }
};
