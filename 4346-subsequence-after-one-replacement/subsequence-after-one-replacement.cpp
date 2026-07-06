class Solution {
public:
    bool canMakeSubsequence(string s, string t) {

    int n = s.size(), m = t.size();
    int z = 0; 
    int o = 0; 
    for(int i = 0; i < m; i++){
        if(o < n){
            if(s[o] == t[i]) o = o + 1;
            else o = max(o, z + 1); }
        
        if(z < n){
            z = z + (s[z] == t[i]);
        }
    }
    return o == n;

    }
};