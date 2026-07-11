class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {

        int n = nums.size();
        int m = pattern.size();

        int ans = 0;

        for (int i = 0; i <= n - m - 1; i++) {

            bool ok = true;

            for (int k = 0; k < m; k++) {

                if (pattern[k] == 1) {
                    if (!(nums[i + k + 1] > nums[i + k])) {
                        ok = false;
                        break;
                    }
                }
                else if (pattern[k] == 0) {
                    if (!(nums[i + k + 1] == nums[i + k])) {
                        ok = false;
                        break;
                    }
                }
                else { 
                    if (!(nums[i + k + 1] < nums[i + k])) {
                        ok = false;
                        break;
                    }
                }
            }

            if (ok) ans++;
        }

        return ans;
    }
};