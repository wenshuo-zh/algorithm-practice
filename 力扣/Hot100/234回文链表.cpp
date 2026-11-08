class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = new ListNode();
        slow->next = head;
        ListNode* fast = slow;
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        //反转后半链表
        ListNode* pre = nullptr;
        ListNode* cur = slow->next;
        ListNode* nxt;
        while(cur){
            nxt = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nxt;
        }
        //判断
        ListNode* p = pre;
        while(p){
            if(head->val != p->val)return false;
            head = head->next;
            p = p->next;
        }
        return true;
    }
};
