class Solution {
public:
    int maxTotalReward(vector<int>& rewardValues) {
        sort(rewardValues.begin(), rewardValues.end());

        int maxSum = 4000; 
        vector<bool> dp(maxSum + 1, false);

        dp[0] = true;

        for (int r : rewardValues) {
            for (int x = r - 1; x >= 0; x--) {
                if (dp[x]) {
                    dp[x + r] = true;
                }
            }
        }

        for (int x = maxSum; x >= 0; x--) {
            if (dp[x])
                return x;
        }

        return 0;
    }
};