class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans = {-1, -1};

        if (!head || !head->next || !head->next->next)
            return ans;

        ListNode* prevNode = head;
        ListNode* curr = head->next;

        int pos = 1;
        int first = -1;
        int prevCritical = -1;
        int minDist = INT_MAX;

        while (curr->next) {
            ListNode* nextNode = curr->next;

            
            bool critical =
                (curr->val > prevNode->val && curr->val > nextNode->val) ||
                (curr->val < prevNode->val && curr->val < nextNode->val);

            if (critical) {
                if (first == -1) {
                  
                    first = pos;
                } else {
                  
                    minDist = min(minDist, pos - prevCritical);
                }

                prevCritical = pos;
            }

            prevNode = curr;
            curr = nextNode;
            pos++;
        }

      
        if (first == -1 || first == prevCritical)
            return ans;

        int maxDist = prevCritical - first;

        return {minDist, maxDist};
    }
};