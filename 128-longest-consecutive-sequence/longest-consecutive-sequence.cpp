class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        set<int>st;
        st.insert(nums.begin(),nums.end());
        int ans=0;
        for(auto s:st){
            if(!st.count(s-1)){
                int len=1;
                int curr=s;
                while(st.count(curr+1)){
                   
                    len++;
                    curr++;

                }
                 ans=max(len,ans);

            }
        }
        return ans;
        
    }
};