class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n=nums.size();
        long long maxl=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
         long long p = 1LL * nums[i] * nums[j];
                long long m=gcd(nums[i],nums[j]);
                long long t=pow(m,2);
                long long s=p/t;
                maxl=max(maxl,s);
            }
        }
        return maxl;
    }
};