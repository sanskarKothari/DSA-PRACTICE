class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1,
                                            vector<vector<int>>& series2) {
        int i = 0, j = 0;
        int n = series1.size(), m = series2.size();

        vector<vector<int>> ans;

        while (i < n && j < m) {
            if (series1[i][0] < series2[j][0]) {
                ans.push_back({series1[i][0],
                               series1[i][1] + series2[j][1]});
                i++;
            }
            else if (series1[i][0] > series2[j][0]) {
                ans.push_back({series2[j][0],
                               series2[j][1] + series1[i][1]});
                j++;
            }
            else {
                ans.push_back({series1[i][0],
                               series1[i][1] + series2[j][1]});
                i++;
                j++;
            }
        }

        while (i < n) {
            int val = (j < m) ? series2[j][1] : 0;
            ans.push_back({series1[i][0], series1[i][1] + val});
            i++;
        }

        while (j < m) {
            int val = (i < n) ? series1[i][1] : 0;
            ans.push_back({series2[j][0], series2[j][1] + val});
            j++;
        }

        return ans;
    }
};