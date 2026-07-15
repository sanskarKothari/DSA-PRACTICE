class Solution {
    int gcd(int a,int b){
        while(b!=0){
            int t=a;
            a=b;
            b=t%b;


        }
        return a;
    }

public:
    int gcdOfOddEvenSums(int n) {
        long long oS=n*n;
        long long tS=0;
        for(int i=1;i<=2*n;i++){
            tS+=i;
        }
        long long eS=tS-oS;
        return gcd(oS,eS);
        
    }
};