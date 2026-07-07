class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
       int x=0;
       for(int i=0;i<s.size();i++){
        if(s[i]!='0'){
            int d=s[i]-'0';
            x=x*10+d;
        }
       }
       int p=x;
       int sum=0;
       string t=to_string(x);
       for(auto i:t){
        int d=i-'0';
        sum+=d;
       }
       return (long long) sum*p;
    }
};