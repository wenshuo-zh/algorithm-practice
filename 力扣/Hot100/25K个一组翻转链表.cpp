class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummyHead = new ListNode(0, head);
        // pre 始终指向当前分组前面的节点，负责连接前后两组
        ListNode* pre = dummyHead;
        // cur 指向当前分组的第一个节点
        ListNode* cur = pre->next;
        // nxt 暂存 cur 的下一个节点，防止反转时丢失后面的链表
        ListNode* nxt = nullptr;
        while(cur){
            // end 用来检查当前分组是否有 k 个节点
            ListNode* end = pre;
            for(int i = 0; i < k; i++){
                if(end)end = end->next;
            }
            if(!end)break;
            // 保存当前分组原来的前驱节点
            // 反转完成后，需要让它指向反转后的新头节点
            ListNode* start = pre;
            // prev 是反转过程中的前驱节点
            // 初始指向 pre，让当前组第一个节点能够正确连接前面的链表
            ListNode* prev = pre;
            // 保存当前分组原来的第一个节点
            // 反转后它会变成当前分组的最后一个节点
            pre = pre->next;
            // 反转当前分组的 k 个节点
            int n = k;
            while(n--){
                nxt = cur->next;  // 保存后继节点
                cur->next = prev; // 当前节点指向前驱节点
                prev = cur;       // 前驱节点向前移动
                cur = nxt;        // 当前节点向后移动
            }
            // 连接前一部分和反转后的分组
            // prev 此时指向反转后的新头节点
            start->next = prev;
            // 原来的第一个节点现在是分组尾节点
            // 将它连接到下一组的起点
            pre->next = cur;
        }
        return dummyHead->next;
    }
};
