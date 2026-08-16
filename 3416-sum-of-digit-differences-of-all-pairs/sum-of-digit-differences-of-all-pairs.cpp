class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;

        while (nums[0] > 0) {
            int cnt[10] = {};

            for (int x : nums) {
                cnt[x % 10]++;
            }

            long long totalPairs = 1LL * n * (n - 1) / 2;

            long long samePairs = 0;

            for (int d = 0; d < 10; d++) {
                samePairs += 1LL * cnt[d] * (cnt[d] - 1) / 2;
            }

            ans += totalPairs - samePairs;

            for (int &x : nums)
                x /= 10;
        }

        return ans;
    }
};