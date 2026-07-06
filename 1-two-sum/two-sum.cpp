class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.count(k-nums[i])){
                return {i,mp[k-nums[i]]};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};