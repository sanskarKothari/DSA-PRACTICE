class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n=nums.size();
        if(n<=1){
            return 1;
        }
        int k=nums[0]%2;
        for(int i=0;i<n;i++){
            if(i%2==0 && nums[i]%2!=k){
                return 0;

            }
            else if(i%2==1 && nums[i]%2==k){
                return 0;
            }
        }
        return 1;
    
        
    }
};