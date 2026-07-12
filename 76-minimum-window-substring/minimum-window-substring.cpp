class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int> mp;

        for(char ch : t)
            mp[ch]++;

        int l = 0;
        int cnt = 0;
        int minLen = INT_MAX;
        int start = 0;

        for(int i = 0; i < s.size(); i++) {

            if(mp[s[i]] > 0)
                cnt++;

            mp[s[i]]--;

            while(cnt == t.size()) {

                if(i - l + 1 < minLen) {
                    minLen = i - l + 1;
                    start = l;
                }

                mp[s[l]]++;

                if(mp[s[l]] > 0)
                    cnt--;

                l++;
            }
        }

        return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
    }
};