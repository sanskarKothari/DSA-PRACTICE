class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(auto c:s){
            mp[c]++;

        }
        vector<pair<int,char>>v;
        for(auto i:mp){
            v.push_back({i.second,i.first});
        }
        sort(v.rbegin(),v.rend());
        
        string ans="";
        for(auto i:v){
            int fr=i.first;
            char c=i.second;
            while(fr--){
                ans+=c;

            }
        }
        return ans;


    }
};