class Solution {
    long long p(int n){
        string s=to_string(n);
        int k=1;
        for(int i=0;i<s.size();i++){
       k *= (s[i] - '0');

        }
        return k;
    }
public:
    int smallestNumber(int n, int t) {
        bool k=true;
        long long pr;
        while(k){
           
            if(p(n)%t==0){
                k=false;
                pr=p(n);
                break;
            }
             n=n+1;



        }
        return n;
        
    }
};