class Solution {
  bool f(vector<int>& nums, int days, int cap) {

    int usedDays = 1;
    int load = 0;

    for (int x : nums) {

        if (load + x <= cap) {
            load += x;
        }
        else {
            usedDays++;
            load = x;
        }
    }

    return usedDays <= days;
}
public:
    int shipWithinDays(vector<int>& nums, int t) {
         int l=*max_element(nums.begin(), nums.end());
        int h= accumulate(nums.begin(), nums.end(), 0);
        int ans=h;
        while(l<=h){
            int m=l+(h-l)/2;
        if(f(nums,t,m)){
            ans=m;
            h=m-1;
        }
        else{
            l=m+1;
        }
        }
        return ans;
    }
};