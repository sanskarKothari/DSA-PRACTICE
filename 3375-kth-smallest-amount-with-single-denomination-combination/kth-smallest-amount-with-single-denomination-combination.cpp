class Solution {
public:
    long long gcd(long long a, long long b) {
        while (b) {
            long long t = a % b;
            a = b;
            b = t;
        }
        return a;
    }

    long long lcm(long long a, long long b) {
        return a / gcd(a, b) * b;
    }

    bool check(vector<int>& coins, long long x, int k) {
        int n = coins.size();
        long long cnt = 0;

        for (int mask = 1; mask < (1 << n); mask++) {
            long long L = 1;
            bool ok = true;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    L = lcm(L, coins[i]);
                    if (L > x) {
                        ok = false;
                        break;
                    }
                }
            }

            if (!ok) continue;

            if (__builtin_popcount(mask) & 1)
                cnt += x / L;
            else
                cnt -= x / L;
        }

        return cnt >= k;
    }

    long long findKthSmallest(vector<int>& coins, int k) {
        long long lo = 1, hi = 1e11;

        while (lo < hi) {
            long long mid = lo + (hi - lo) / 2;

            if (check(coins, mid, k))
                hi = mid;
            else
                lo = mid + 1;
        }

        return lo;
    }
};