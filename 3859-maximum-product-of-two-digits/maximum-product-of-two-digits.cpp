class Solution {
public:
    int maxProduct(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        int sz=s.size();
        return (long long)(s[sz-1]-'0')*(s[sz-2]-'0');
    }
};