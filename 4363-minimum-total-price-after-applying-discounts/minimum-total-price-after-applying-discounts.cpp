class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());

        int n = prices.size();
        int m = discounts.size();

        double s = 0;

        int i = 0, j = 0;

        while (i < n && j < m) {
            s += prices[i] * (100.0 - discounts[j]) / 100.0;
            i++;
            j++;
        }

        while (i < n) {
            s += prices[i];
            i++;
        }

        return s;
    }
};