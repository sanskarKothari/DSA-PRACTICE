class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* f = head;
        ListNode* s = head;
        ListNode* p = nullptr;

        while (n > 0) {
            f = f->next;
            n--;
        }

      
        if (f == nullptr) {
            return head->next;
        }

        while (f != nullptr) {
            p = s;
            s = s->next;
            f = f->next;
        }

        p->next = s->next;

        return head;
    }
};