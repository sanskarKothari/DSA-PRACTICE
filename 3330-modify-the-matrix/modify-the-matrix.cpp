class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {

        vector<int> ans(matrix[0].size());

        for (int i = 0; i < matrix[0].size(); i++) {
            int maxi = -1e9;

            for (int j = 0; j < matrix.size(); j++) {
                maxi = max(maxi, matrix[j][i]);
            }

            ans[i] = maxi;
        }

        for (int i = 0; i < matrix[0].size(); i++) {
            for (int j = 0; j < matrix.size(); j++) {
                if (matrix[j][i] == -1) {
                    matrix[j][i] = ans[i];
                }
            }
        }

        return matrix;
    }
};