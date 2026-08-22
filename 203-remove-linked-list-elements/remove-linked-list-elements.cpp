class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while (curr != nullptr) {
            ListNode* t = curr->next;

            if (curr->val == val) {
                if (prev != nullptr) {
                    prev->next = t;
                }
                else {
                    head = t;
                }
            }
            else {
                prev = curr;
            }

            curr = t;
        }

        return head;
    }
};