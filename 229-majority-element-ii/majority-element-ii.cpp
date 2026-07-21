class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c1=0;
        int c2=0;
        int cd1=INT_MIN;
        int cd2=INT_MIN;
        for(auto i:nums){
          
             if(i==cd1){
                c1++;
            }
            else if(i==cd2){
                c2++;
            }
             else if(c1==0){
                cd1=i;
                c1=1;
            }
          else  if(c2==0){
                cd2=i;
                c2=1;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=0,c2=0;
        for(auto i:nums){
            if(i==cd1)c1++;
            if(i==cd2)c2++;
        }
        vector<int>ans;
        if(c1>n/3)ans.push_back(cd1);
       if(c2>n/3)ans.push_back(cd2);
        return ans;
        
    }
};