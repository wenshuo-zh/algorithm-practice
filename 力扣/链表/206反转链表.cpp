
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    // 双指针原地反转，pre 始终指向已反转部分的头节点。
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = nullptr;
        ListNode* cur = head;
        while (cur != nullptr) {
            ListNode* next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        return pre;
    }

    // 头插法：复用原链表节点，dummyHead 的 next 始终是新链表头。
    ListNode* reverseListByHeadInsert(ListNode* head) {
        ListNode dummyHead;
        ListNode* cur = head;
        while (cur != nullptr) {
            ListNode* next = cur->next;
            cur->next = dummyHead.next;
            dummyHead.next = cur;
            cur = next;
        }
        return dummyHead.next;
    }

    // 复制节点再头插，不修改原链表，但需要 O(n) 额外空间。
    ListNode* reverseListByCopy(ListNode* head) {
        ListNode dummyHead;
        for (ListNode* cur = head; cur != nullptr; cur = cur->next) {
            ListNode* node = new ListNode(cur->val);
            node->next = dummyHead.next;
            dummyHead.next = node;
        }
        return dummyHead.next;
    }
};
