class Solution {
    bool ok(vector<int>& piles,int h,int m){
        long long sum=0;
        for(auto i:piles){
            sum+=(i+m-1)/m;
        }
        return sum<=h;

    }
public:
    int minEatingSpeed(vector<int>& piles, int hr) {
        int l=1;
        int h=*max_element(piles.begin(),piles.end());
        int ans=-1;

        while(l<=h){
            int m=l+(h-l)/2;
            if(ok(piles,hr,m)){
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