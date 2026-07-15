class Solution {
   
public:

    bool isSubstringPresent(string s) {
        int n=s.size();
        string k=s;
        reverse(s.begin(),s.end());
       
        for(int i=0;i<n-1;i++){
            string u=k.substr(i,2);
            if(s.find(u)!=string::npos)return 1;
           
        }
        return 0;
    }
};