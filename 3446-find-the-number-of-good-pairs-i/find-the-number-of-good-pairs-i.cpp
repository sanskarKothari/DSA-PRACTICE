class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n=nums2.size();
        vector<int>nums3(n);
        for(int i=0;i<nums2.size();i++){
            nums3[i]=k*nums2[i];
        }
        int cnt=0;
        for(int i=0;i<nums1.size();i++){

            for(int j=0;j<n;j++){
                if(nums1[i]%nums3[j]==0){
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
};