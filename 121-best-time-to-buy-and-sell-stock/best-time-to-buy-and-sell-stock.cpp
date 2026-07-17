class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=prices[0];
        int p=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<m){
                m=prices[i];
            }
            p=max(p,prices[i]-m);


        }
return p;
    }
};