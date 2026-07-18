class Solution {
public:
    int search(vector<int>& nums, int t) {
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==t)return m;

            if(nums[l]<=nums[m]){
                if(t>=nums[l] && t<=nums[m])h=m-1;
                else l=m+1;
            }
            else{
                if(t>=nums[m] && t<=nums[h])l=m+1;
                else h=m-1;

            }
        }
        return -1;
        
    }
};