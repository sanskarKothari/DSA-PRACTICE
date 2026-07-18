class Solution {
  public:
    int countFreq(vector<int>& arr, int t) {
        // code here
         int l=0;
        int e=arr.size()-1;
        int f=-1,s=-1;
        while(l<=e){
            int m=l+(e-l)/2;
            if(arr[m]==t){
                f=m;
                e=m-1;
            }
            else if(arr[m]<t){
                l=m+1;

            }
            else{
                e=m-1;

            }
        }
        l=0;
        e=arr.size()-1;
         while(l<=e){
            int m=l+(e-l)/2;
            if(arr[m]==t){
                s=m;
                l=m+1;
            }
            else if(arr[m]<t){
                l=m+1;

            }
            else{
                e=m-1;

            }
        }
        if(f!=-1 && s!=-1)return s-f+1;
        return 0;
        
        
    }
};
