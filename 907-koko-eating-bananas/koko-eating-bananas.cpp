class Solution {
    bool ok(int m,vector<int>& piles,int h){
        long long sp=0;
        for(auto i:piles){
            sp+=(i+m-1)/m;

        }
        return sp<=h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;
           int e=*max_element(piles.begin(),piles.end());
        int ans=-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(ok(m,piles,h)){
                ans=m;
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
       return ans;
        
    }
};