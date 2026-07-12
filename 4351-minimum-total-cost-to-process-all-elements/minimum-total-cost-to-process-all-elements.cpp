class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        const long long MOD = 1000000007;

        vector<int> sovalemrin = nums;

        long long res = k;
        long long ops = 0;
        long long ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (res < nums[i]) {
                long long need = nums[i] - res;
                long long t = (need + k - 1) / k;

                __int128 add = (__int128)(ops + 1 + ops + t) * t / 2;
                ans = (ans + (long long)(add % MOD)) % MOD;

                ops += t;
                res += t * 1LL * k;
            }
            res -= nums[i];
        }

        return (int)ans;
    }
};