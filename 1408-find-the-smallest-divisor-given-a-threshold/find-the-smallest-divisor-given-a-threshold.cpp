class Solution {
public:

    bool ok(vector<int>& a, int d, int t) {

        long long sum = 0;

        for (int x : a) {
            sum += (x + d - 1) / d;
        }

        return sum <= t;
    }

    int smallestDivisor(vector<int>& a, int t) {

        int s = 1;
        int e = *max_element(a.begin(), a.end());

        int ans = -1;

        while (s <= e) {

            int mid = s + (e - s) / 2;

            if (ok(a, mid, t)) {

                ans = mid;
                e = mid - 1;   

            } else {

                s = mid + 1;
            }
        }

        return ans;
    }
};