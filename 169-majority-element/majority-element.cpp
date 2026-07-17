class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnd;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0)cnd=nums[i];
            if(cnd==nums[i])cnt++;
            else cnt--;


        }
        return cnd;

        
    }
};