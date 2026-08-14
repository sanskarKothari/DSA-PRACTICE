class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());

        int freeDays = 0;
        int last = 0;

        for(auto &meeting : meetings) {
            int start = meeting[0];
            int end = meeting[1];

            if(start > last + 1) {
                freeDays += start - last - 1;
            }

            last = max(last, end);
        }

        freeDays += days - last;

        return freeDays;
    }
};