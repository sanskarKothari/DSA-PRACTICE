class Solution {
    bool ok(vector<int>& w,int days,int m){
        int sum=0;
        int d=1;
        for(auto i:w){
            if(sum+i>m){
                d++;
                sum=i;
            }
            else{
                sum+=i;
            }
        }
        return d<=days;
        

    }
public:
    int shipWithinDays(vector<int>& nums, int days) {
        int l=*max_element(nums.begin(), nums.end());
        int h= accumulate(nums.begin(), nums.end(), 0);
        int ans=h;
        while(l<=h){
            int m=l+(h-l)/2;
            if(ok(nums,days,m)){
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