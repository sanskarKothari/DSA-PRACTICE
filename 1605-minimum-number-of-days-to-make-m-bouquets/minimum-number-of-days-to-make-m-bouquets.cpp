class Solution {
public:

    bool ok(vector<int>& a, int d, int m, int k) {

        int c = 0;
        int b = 0;

        for (int x : a) {

            if (x <= d) {

                c++;

                if (c == k) {
                    b++;
                    c = 0;
                }

            } else {

                c = 0;
            }
        }

        return b >= m;
    }

    int minDays(vector<int>& a, int m, int k) {

        long long need = 1LL * m * k;

        if (need > a.size())
            return -1;

        int s = *min_element(a.begin(), a.end());
        int e = *max_element(a.begin(), a.end());

        int ans = -1;

        while (s <= e) {

            int mid = s + (e - s) / 2;

            if (ok(a, mid, m, k)) {

                ans = mid;
                e = mid - 1;    

            } else {

                s = mid + 1;
            }
        }

        return ans;
    }
};