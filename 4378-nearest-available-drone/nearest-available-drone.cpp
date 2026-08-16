class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int m=INT_MAX;
        int cnt=0;
        int ind =-1;
        for(auto i:drones){
            int x=i[0];
            int y=i[1];
            int a=target[0];
            int b=target[1];
            int d=abs(x-a)+abs(y-b);
            if(d<=i[2]){
                if(d<m){
                    m=d;
                    ind=cnt;
                }
            }
            cnt++;
        }
        return ind;
        
    }
};