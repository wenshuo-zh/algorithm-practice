struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    // 虚头节点：统一处理删除头节点和中间节点的情况。
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummyHead(0, head);
        ListNode* temp = &dummyHead;
        while (temp->next) {
            if (temp->next->val == val)
                temp->next = temp->next->next;
            // 删除数据后 temp->next 改变，不能直接指向 next，否则会漏判断下一个节点
            // 没删数据才后移
            else
                temp = temp->next;
        }
        return dummyHead.next;
    }

    // 递归：先处理后继链表，再决定当前节点是否保留。
    ListNode* removeElementsRecursive(ListNode* head, int val) {
        if (head == nullptr) {
            return nullptr;
        }
        head->next = removeElementsRecursive(head->next, val);
        return head->val == val ? head->next : head;
    }
};
