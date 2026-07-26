class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        mp[nums[n-1]]=-1;
        stack<int>st;
        st.push(nums[n-1]);
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i]){
                st.pop();
            }
            if(st.empty()){
                mp[nums[i]]=-1;
            }
            else{
                mp[nums[i]]=st.top();
            }
            st.push(nums[i]);
        
        }
        vector<int>a;
        for(auto i:nums1){
            a.push_back(mp[i]);
        }
        return a;
        
    }
};