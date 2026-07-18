class Solution {
    bool ok(vector<int> &arr, long long m, int k) {

    int students = 1;
    int sum = 0;

    for (int pages : arr) {

        if (sum + pages <= m) {
            sum += pages;
        }
        else {
            students++;
            sum = pages;
        }
    }

    return students <= k;
}
public:
    int splitArray(vector<int>& arr, int k) {
         int n=arr.size();
         if (k > n)
            return -1;
        
        long long l= *max_element(arr.begin(), arr.end());
        long long h=accumulate(arr.begin(), arr.end(), 0);
        long long ans=-1;
        while(l<=h){
            long long m=l+(h-l)/2;
            if(ok(arr,m,k)){
                ans=m;
                h=m-1;
            }
            else{
                l=m+1;
                
            }
        }
        return ans;
    }
};