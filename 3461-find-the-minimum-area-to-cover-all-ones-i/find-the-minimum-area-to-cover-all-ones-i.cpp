class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int mr=1e9;
        int mxr=-1e9;
        int mc=1e9;
        int mxc=-1e9;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    mr=min(mr,i);
                    mc=min(j,mc);
                    mxr=max(mxr,i);
                    mxc=max(mxc,j);

                }

            }
            
        }
        int a=mxc-mc+1;
        int b=mxr-mr+1;
        long long c=a*b;
        return c;

        
    }
};