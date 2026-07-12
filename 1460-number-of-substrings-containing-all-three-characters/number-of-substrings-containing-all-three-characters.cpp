class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int lastsee[3]={-1,-1,-1};
        int cnt=0;
        for(int i=0;i<n;i++){
            lastsee[s[i]-'a']=i;
        cnt+=1+min(lastsee[0],min(lastsee[1],lastsee[2]));
        }
        return cnt;
    }
};