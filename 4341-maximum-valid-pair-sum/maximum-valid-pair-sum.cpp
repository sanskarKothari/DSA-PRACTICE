class Solution {
public:
    long long maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();

        vector<long long> suffixMax(n);
        suffixMax[n-1] = nums[n-1];

        for(int i = n-2; i >= 0; i--) {
            suffixMax[i] = max((long long)nums[i], suffixMax[i+1]);
        }

        long long ans = 0;

        for(int i = 0; i + k < n; i++) {
            ans = max(ans, (long long)nums[i] + suffixMax[i+k]);
        }

        return ans;
    }
};