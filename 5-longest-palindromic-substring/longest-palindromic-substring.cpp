class Solution {
    bool f(const string& s,int i,int j){
        if(i>=j){
            return 1;
        }
        if(s[i]==s[j]){
           return  f(s,i+1,j-1);
        }
        else{
            return 0;
        }
    }
public:

    string longestPalindrome(string s) {
        int n=s.size();
        int sr=0;
        int maxl=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(f(s,i,j)){
                    if(maxl<(j-i+1)){
                        maxl=j-i+1;
                        sr=i;

                    }
                   
                  
                }
            }
        }
        return s.substr(sr,maxl);
    }
};