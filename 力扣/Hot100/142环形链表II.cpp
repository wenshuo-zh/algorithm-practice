class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next)return NULL;
        ListNode* fast = head;
        ListNode* slow = head;
        bool isCycle = false;
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                isCycle = true;
                break;
            }
        }
        if(!isCycle)return NULL;
        ListNode* res = head;
        while(res != slow){
            res = res->next;
            slow = slow->next;
        }
        return res;
    }
};
