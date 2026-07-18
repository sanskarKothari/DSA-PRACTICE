class Solution {
public:
    int rowWithMax1s(vector<vector<int>> &arr) {

        int m = arr[0].size();
        int ans = -1;
        int mx = 0;

        for (int i = 0; i < arr.size(); i++) {

            int k = lower_bound(arr[i].begin(), arr[i].end(), 1) - arr[i].begin();

            int ones = m - k;

            if (ones > mx) {
                mx = ones;
                ans = i;
            }
        }

        return ans;
    }
};