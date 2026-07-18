class Solution {
  public:
    int lowerBound(vector<int>& nums, int target) {
           int s=0;
        int e=nums.size()-1;
        int ans=-1;
        
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]>=target){
                ans= m;
                e=m-1;}
            else s=m+1;
           
        }
        // code here
        if(ans<nums.size()) return ans;
        return nums.size();
       
        
    }
};
