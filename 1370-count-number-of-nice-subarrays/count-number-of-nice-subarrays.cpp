class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mp;
        int cnt=0;
        mp[0]=1;
        int sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==1){
                sum+=1;
            }
            else{
                sum=sum+0;
            }
            if(mp.count(sum-k)){
                cnt+=mp[sum-k];
            }
            mp[sum]++;
        }
        return cnt;
    }
};