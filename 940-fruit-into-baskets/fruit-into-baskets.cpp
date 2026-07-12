class Solution {
public:
    int totalFruit(vector<int>& nums) {
        map<int,int>mp;
        int l=0,r=0;
        int n=nums.size();
        int maxlen=0;
        while(r<n){
            mp[nums[r]]++;
            while(mp.size()>2){
                mp[nums[l]]--;
                if(mp[nums[l]]==0)mp.erase(nums[l]);
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};