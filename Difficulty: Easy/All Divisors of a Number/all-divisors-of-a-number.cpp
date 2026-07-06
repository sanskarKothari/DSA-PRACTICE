class Solution {
  public:
    vector<int> getDivisors(int n) {
        // code here
       vector<int>ans;
       for(int i=1;i*i<=n;i++){
           if(n%i==0){
               if(i*i!=n){
                   ans.push_back(i);
                    ans.push_back(n/i);
               }
               else{
                    ans.push_back(i);
               }
           }
       }
       sort(ans.begin(),ans.end());
       return ans;
    }
};