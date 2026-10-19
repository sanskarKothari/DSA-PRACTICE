class Solution {
public:
    int search(vector<int>& nums, int x) {
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
        int m=s+(e-s)/2;
        if(nums[m]==x)return m;
       else if(nums[s]<=nums[m]){
             if(nums[s]<=x && nums[m]>=x){
                e=m-1;
             }
             else{
                s=m+1;
             }

        }
        else{
             if(nums[m]<=x && nums[e]>=x){
            s=m+1;
             }
             else{
                e=m-1;
             }
        }
        }
        return -1;
    }
};