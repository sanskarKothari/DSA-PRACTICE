class Solution {
private:
    long long gcdk(long long a,long long b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
public:
    long long gcdSum(vector<int>& nums) {
        int maxi=-1e9;
        vector<int>pr(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
            int m=gcdk(nums[i],maxi);
            pr[i]=m;
        }
        sort(pr.begin(),pr.end());
        int s=0;
        int e=nums.size()-1;
        long long sum=0;
        while(s<e){
            int k=gcdk(pr[s],pr[e]);
            sum+=k;
            s++;
            e--;
        }
        return sum;
    }
};