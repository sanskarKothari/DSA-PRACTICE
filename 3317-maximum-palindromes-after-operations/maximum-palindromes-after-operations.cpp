class Solution {
public:
    int maxPalindromesAfterOperations(vector<string>& words) {

        vector<int> freq(26, 0);

        for (auto &w : words) {
            for (char ch : w) {
                freq[ch - 'a']++;
            }
        }

        int pairs = 0;

        for (int f : freq) {
            pairs += f / 2;
        }

        vector<int> len;

        for (auto &w : words) {
            len.push_back(w.size());
        }

        sort(len.begin(), len.end());

        int ans = 0;

        for (int L : len) {

            int need = L / 2;

            if (pairs >= need) {
                pairs -= need;
                ans++;
            } else {
                break;
            }
        }

        return ans;
    }
};