class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode();
        ListNode* tail = dummyHead;
        bool flag = false;
        while(l1 || l2 || flag){
            int val = 0;
            if(l1)val += l1->val;
            if(l2)val += l2->val;
            if(flag) {
                val++;
                flag = false;
            }
            if(val >= 10){
                val -= 10;
                flag = true;
            }
            ListNode* node = new ListNode(val);
            tail->next = node;
            tail = node;
            if(l1)l1 = l1->next;
            if(l2)l2 = l2->next;
        }
        return dummyHead->next;
    }
};
