class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyHead = new ListNode(0, head);
        if(!head || !head->next)return head;
        //pre是要交换两个节点的先驱节点
        ListNode* pre = dummyHead;
        while(pre->next && pre->next->next){
            ListNode* first = pre->next;
            ListNode* second = first->next;
            ListNode* nextpre = second->next;
            pre->next = second;
            second->next = first;
            first->next = nextpre;
            pre = first;
        }
        return dummyHead->next;
    }
};
