class Solution {
public:
    int minimumDeletions(string word, int k) {

        vector<int> freq(26, 0);

        for (char c : word)
            freq[c - 'a']++;

        int ans = INT_MAX;

       
        for (int base : freq) {

            if (base == 0) continue;

            int del = 0;

            for (int f : freq) {

                if (f == 0) continue;

                if (f < base)
                    del += f;                

                else if (f > base + k)
                    del += f - (base + k);    
            }

            ans = min(ans, del);
        }

        return ans == INT_MAX ? 0 : ans;
    }
};