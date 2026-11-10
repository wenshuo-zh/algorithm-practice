class Solution {
public:
    ListNode* mergeLists(ListNode* p, ListNode* q){
        ListNode* dummyHead = new ListNode();
        ListNode* cur = dummyHead;
        while(p && q){
            if(p->val > q->val){
                cur->next = q;
                q = q->next;
            }
            else{
                cur->next = p;
                p = p->next;
            }
            cur = cur->next;
        }
        if(p)cur->next = p;
        else cur->next = q;
        return dummyHead->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0)return nullptr;
        for(int i = 1; i < lists.size(); i++){
            lists[i] = mergeLists(lists[i-1], lists[i]); 
        }
        return lists[lists.size()-1];
    }
};

 //递归函数就是先拆，走到左右区间只剩一个链表时开始回溯，回溯时拼接两个链表，一直拼接到最后有序
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* p, ListNode* q){
        ListNode* dummyHead = new ListNode();
        ListNode* cur = dummyHead;
        while(p && q){
            if(p->val > q->val){
                cur->next = q;
                q = q->next;
            }
            else{
                cur->next = p;
                p = p->next;
            }
            cur = cur->next;
        }
        if(p)cur->next = p;
        else cur->next = q;
        return dummyHead->next;
    }
    ListNode* merge(vector<ListNode*>& lists, int l, int r){
        if(l == r)return lists[l];
        int mid = (l + r) / 2;
        ListNode* left = merge(lists, l, mid);
        ListNode* right = merge(lists, mid+1, r);
        return mergeTwoLists(left, right);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0)return nullptr;
        return merge(lists, 0, lists.size()-1);
    }
};
