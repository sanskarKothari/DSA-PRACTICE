class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
    const long long MOD = 1000000007;

        vector<long long> nums(n, 1);

        for (int i = 0; i < k; i++) {
            long long s = 0;

            for (int j = 0; j < n; j++) {
                s = (s + nums[j]) % MOD;
                nums[j] = s;
            }
        }

        return nums[n - 1];
    }
};