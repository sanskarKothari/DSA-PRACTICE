class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());
        int s=0;
        for(auto i:apple)s+=i;
        int c=0;
        for(int i=capacity.size()-1;i>=0;i--){
            s-=capacity[i];
            c++;
            if(s<=0)return c;


        }
        return 0;
        
    }
};