class Solution {
public:
    long long countCommas(long long n) {
        long long tc=0;
        if(n>=1000LL){
            tc+=(n-1000LL+1);
        }
        if(n>=1000000LL){
            tc+=(n-1000000LL+1);
        }
        if(n>=1000000000LL){
            tc+=(n-1000000000LL+1);
        }
        if(n>=1000000000000LL){
            tc+=(n-1000000000000LL+1);
        }
        if(n>=1000000000000000LL){
            tc+=(n-1000000000000000+1);
        }
        return tc;
    }
};