class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        vector<double>v;
        while(i<j){
            float av=(nums[i]+nums[j])/2.0;
            v.push_back(av);
            i++;
            j--;

        }
        sort(v.begin(),v.end());
        return v[0];
        
    }
};