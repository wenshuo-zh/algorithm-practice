class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //res做结果链表的虚头节点
        ListNode* res = new ListNode();
        ListNode* cur = head;
        while(cur){
            //头插法
            ListNode* newCur = new ListNode(cur->val);
            newCur->next = res->next;
            res->next = newCur;
            //遍历原链表
            cur = cur->next;
        }
        return res->next;
    }
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = nullptr;
        ListNode* cur = head;
        ListNode* nxt;
        while(cur){
            nxt = cur->next;//保存后面的节点
            cur->next = pre;//反转
            pre = cur;//前一个节点后移
            cur = nxt;//当前节点后移
        }
        return pre;
    }
};
