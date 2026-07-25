class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        mp[nums[n-1]]=-1;
        stack<int>s;
        s.push(nums[n-1]);
        for(int i=n-2;i>=0;i--){
            while(!s.empty() && nums[i]>=s.top()){
                s.pop();

            }
            if(!s.empty()){
                mp[nums[i]]=s.top();
            }
            else{
                mp[nums[i]]=-1;
            }
            s.push(nums[i]);
        }
        vector<int>a;
        for(auto i:nums1){
            a.push_back(mp[i]);
        }
        return a;

    }
};