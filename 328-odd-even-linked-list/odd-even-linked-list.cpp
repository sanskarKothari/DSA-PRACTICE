class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next)
            return head;

        ListNode *oddHead = nullptr, *oddTail = nullptr;
        ListNode *evenHead = nullptr, *evenTail = nullptr;

        ListNode *curr = head;
        int pos = 1;

        while (curr) {
            if (pos % 2) {  // odd position
                if (!oddHead) {
                    oddHead = oddTail = curr;
                } else {
                    oddTail->next = curr;
                    oddTail = curr;
                }
            } else {        // even position
                if (!evenHead) {
                    evenHead = evenTail = curr;
                } else {
                    evenTail->next = curr;
                    evenTail = curr;
                }
            }

            curr = curr->next;
            pos++;
        }

        oddTail->next = evenHead;

        if (evenTail)
            evenTail->next = nullptr;

        return oddHead;
    }
};