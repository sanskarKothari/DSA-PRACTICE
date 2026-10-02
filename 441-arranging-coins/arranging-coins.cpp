class Solution {
public:
    int arrangeCoins(int n) {
        long long k = 0;
        long long t = 1;
        int c = 0;

        while (k + t <= n) {
            k += t;
            t++;
            c++;
        }

        return c;
    }
};