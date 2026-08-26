struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    // 双指针分别走完两条链表后换到另一条链表头，最终对齐长度差。
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* a = headA, * b = headB;
        while (a != b) {
            a = a ? a->next : headB;
            b = b ? b->next : headA;
        }
        return a;
    }

    // 长度对齐：较长链表先走长度差，再同步比较节点地址。
    ListNode* getIntersectionNodeByLength(ListNode* headA, ListNode* headB) {
        int lengthA = getLength(headA);
        int lengthB = getLength(headB);
        ListNode* curA = headA;
        ListNode* curB = headB;

        while (lengthA > lengthB) {
            curA = curA->next;
            --lengthA;
        }
        while (lengthB > lengthA) {
            curB = curB->next;
            --lengthB;
        }
        while (curA != curB) {
            curA = curA->next;
            curB = curB->next;
        }
        return curA;
    }

private:
    int getLength(ListNode* head) {
        int length = 0;
        while (head != nullptr) {
            ++length;
            head = head->next;
        }
        return length;
    }
};
