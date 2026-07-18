class Solution {
  public:
    int findFloor(vector<int>& nums, int target) {
        // code here
          int s=0;
        int e=nums.size()-1;
        int ans=-1;
        
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]<=target){
                ans= m;
                s=m+1;}
            else e=m-1;
           
        }
        // code here
        return ans;
    }
};
