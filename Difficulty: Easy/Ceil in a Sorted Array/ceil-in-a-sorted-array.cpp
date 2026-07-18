class Solution {
  public:
    int findCeil(vector<int>& nums, int target) {
        // code here
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
        return ans;
    }
};