class Solution {
public:
    int kadane(vector<int>& a, vector<int>& b) {
        int cur = 0, mx = 0;

        for (int i = 0; i < a.size(); i++) {
            cur = max(0, cur + a[i] - b[i]);
            mx = max(mx, cur);
        }

        return mx;
    }

    int maximumsSplicedArray(vector<int>& a, vector<int>& b) {
        int s1 = 0, s2 = 0;

        for (int x : a)
            s1 += x;

        for (int x : b)
            s2 += x;

        int g1 = kadane(b, a);
        int g2 = kadane(a, b);

        return max(s1 + g1, s2 + g2);
    }
};