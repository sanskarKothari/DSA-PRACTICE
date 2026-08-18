class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        vector<long long> freq(24, 0);
        long long ans = 0;

        for(int i = 0; i < hours.size(); i++) {
            int r = hours[i] % 24;

            int need = (24 - r) % 24;

            ans += freq[need];

            freq[r]++;
        }

        return ans;
    }
};