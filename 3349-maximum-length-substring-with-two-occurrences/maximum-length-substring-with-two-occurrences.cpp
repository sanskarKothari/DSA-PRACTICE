class Solution {
public:
    int maximumLengthSubstring(string nums) {
        map<char,int>mp;
        int l=0,r=0,ml=0;
        int n=nums.size();
        while(r<n){
            mp[nums[r]]++;
            while(mp[nums[r]]>2){
                mp[nums[l]]--;
                if(mp[nums[l]]==0)mp.erase(nums[l]);
                l++;
            }
            ml=max(ml,r-l+1);
            r++;
        }
        return ml;

        
    }
};