
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int e=n-1;

        if(nums[0]<=nums[n-1])return nums[0];

        while(s<e){
            int m=s+(e-s)/2;
            if(nums[0]<=nums[m]){
                s=m+1;
            }
            else{
                e=m;
            }
        }
        return nums[s];
    }
};
