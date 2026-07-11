class Solution {
public:
    int minimumTimeToInitialState(string word, int k) {
        int n = word.size();

        for (int t = 1; ; t++) {
            int shift = t * k;

            if (shift >= n)
                return t;

            bool ok = true;

            for (int i = shift; i < n; i++) {
                if (word[i] != word[i - shift]) {
                    ok = false;
                    break;
                }
            }

            if (ok)
                return t;
        }
    }
};