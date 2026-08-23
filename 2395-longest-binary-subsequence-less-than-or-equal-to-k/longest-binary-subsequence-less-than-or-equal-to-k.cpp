class Solution {
public:
    int longestSubsequence(string s, int k) {
        int n = s.size();
        int ans = 0;
        long long val = 0;
        long long power = 1;

       \
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') {
                ans++;
            }
            else {
                if (val + power <= k) {
                    val += power;
                    ans++;
                }
            }

            if (power <= k)
                power *= 2;
        }

        return ans;
    }
};