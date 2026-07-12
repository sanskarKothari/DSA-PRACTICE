class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int cnt=0;
        int n=nums.size();
        int sum=0;
        map<int,int>mp;
        mp[0]=1;

        for(int i=0;i<n;i++){
            sum+=nums[i];
            
            if(mp.count(sum-goal)){
                cnt+=mp[sum-goal];
            }
            mp[sum]++;
        }
        return cnt;
    }
};