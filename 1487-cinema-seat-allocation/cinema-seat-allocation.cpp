class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, int> rows;

        for (auto seat : reservedSeats) {
            int row = seat[0];
            int col = seat[1];

            if (col >= 2 && col <= 9)
                rows[row] |= (1 << (col - 2));
        }

        int ans = (n - rows.size()) * 2;

        for (auto [row, mask] : rows) {
            bool left = (mask & 15) == 0;
            bool right = (mask & 240) == 0;
            bool middle = (mask & 60) == 0;

            if (left && right)
                ans += 2;
            else if (left || right || middle)
                ans += 1;
        }

        return ans;
    }
};