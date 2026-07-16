class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int k=x;
        string s=to_string(x);
        long long sm=0;
        for(auto i:s){
            int d=i-'0';
            sm+=d;

        }
        if(k%sm==0)return sm;
        return -1;
        
    }
};