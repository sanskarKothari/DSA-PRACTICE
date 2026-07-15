class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
          priority_queue<int> pq;  
          int n=happiness.size();

   long long s=0;
vector<int>ans;
int i=n-1;
while(i>=0 && k>0){
    ans.push_back(happiness[i]);
    k--;
    i--;
}
for(int i=0;i<ans.size();i++){
    if((ans[i]-i)>=0)s+=(ans[i]-i);
}


        return s;
    }
};