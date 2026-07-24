class Solution {
    bool ok(int k,int mt,vector<int>& bloomDay,int m){
        int c=0,b=0;
        for(auto i:bloomDay){
            if(i<=m){
                c++;
                if(c==k){
                    b++;
                    c=0;

                }
            }
            else{
                c=0;
            }
        }
        return b>=mt;
    }
public:
    int minDays(vector<int>& bloomDay, int mt, int k) {
        int l=*min_element(bloomDay.begin(),bloomDay.end());
        int h=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(ok(k,mt,bloomDay,m)){
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