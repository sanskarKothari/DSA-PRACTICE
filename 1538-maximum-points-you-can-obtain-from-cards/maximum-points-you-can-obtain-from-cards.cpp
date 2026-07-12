class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int n=c.size();
        int sr=0;
        int maxsr=0;
        for(int i=0;i<k;i++){
            sr+=c[i];
        }
        maxsr=sr;
        for(int i=0;i<k;i++){
            sr=sr-c[k-i-1]+c[n-i-1];
            maxsr=max(sr,maxsr);

        }
        return maxsr;

    }
};