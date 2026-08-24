class Solution {
public:

    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        return prev;
    }

    ListNode* rotateRight(ListNode* head, int k) {

        if (!head || !head->next || k == 0)
            return head;

       
        int n = 0;
        ListNode* temp = head;

        while (temp) {
            n++;
            temp = temp->next;
        }

        k %= n;

        if (k == 0)
            return head;

        head = reverse(head);

       
        ListNode* first = head;
        ListNode* second = head;

        for (int i = 1; i < k; i++) {
            second = second->next;
        }

        ListNode* rest = second->next;
        second->next = nullptr;

        first = reverse(first);


        rest = reverse(rest);

        second = first;

        while (second->next)
            second = second->next;

        second->next = rest;

        return first;
    }
};