class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummyHead = new ListNode();
        ListNode* p = list1;
        ListNode* q = list2;
        ListNode* temp = dummyHead;
        while(p && q){
            if(p->val > q->val){
                temp->next = q;
                temp = temp->next;
                q = q->next;
            }
            else{
                temp->next = p;
                temp = temp->next;
                p = p->next;
            }
        }
        if(p)temp->next = p;
        else temp->next = q;
        return dummyHead->next;
    }
};
