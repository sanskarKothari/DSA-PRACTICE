class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[nums[i]]>2 && mp[nums[i]]!=1){
                return 0;
            }
        }
        if(mp.size()>=n/2)return 1;
        return 0;
    }
};