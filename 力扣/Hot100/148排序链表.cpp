class Solution {
public:
    ListNode* split(ListNode* head, int size){
        if(!head)return nullptr;
        ListNode* cur = head;
        for(int i = 1; i < size && cur->next; i++)cur = cur->next;
        ListNode* second = cur->next;
        cur->next = nullptr;
        return second;
    }
    ListNode* merge(ListNode* first, ListNode* second){
        ListNode* merged = new ListNode(0);
        ListNode* cur = merged;
        while(first && second){
            if(first->val > second->val){
                cur->next = second;
                second = second->next;
            }else{
                cur->next = first;
                first = first->next;
            }
            cur = cur->next;
        }
        if(first)cur->next = first;
        else cur->next = second;
        return merged->next;
    }
    ListNode* sortList(ListNode* head) {
        int n = 0;
        ListNode* cur = head;
        while(cur){
            n++;
            cur = cur->next;
        }        
        cur = head;
        ListNode* dummyHead = new ListNode(0, head);
        ListNode* tail = dummyHead;
        for(int i = 1; i < n; i *= 2){
            //每一轮归并都要重置cur和tail
            cur = dummyHead->next;
            tail = dummyHead;
            while(cur){
                ListNode* first = cur;
                ListNode* second = split(cur, i);
                cur = split(second, i);
                tail->next = merge(first, second);
                while(tail->next)tail = tail->next;
            }
        }
        return dummyHead->next;
    }
};
