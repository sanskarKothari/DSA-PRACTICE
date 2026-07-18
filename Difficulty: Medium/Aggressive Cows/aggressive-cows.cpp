class Solution {
    
        bool ok(vector<int> &arr, int m, int k) {

    int cows = 1;         
    int last = arr[0];

    for (int i = 1; i < arr.size(); i++) {

        if (arr[i] - last >= m) {
            cows++;
            last = arr[i];
        }

        if (cows >= k)
            return true;
    }

    return false;
}
    
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        
        int l=1;
        int h=arr[n-1]-arr[0];
        int ans=-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(ok(arr,m,k)){
                ans=m;
                l=m+1;
            }
            else{
                h=m-1;
                
            }
        }
        return ans;
    }
};