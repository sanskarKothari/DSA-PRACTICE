class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr = 0;
        bool hZ = false;

        for (int x : nums) {
            xr ^= x;
            if (x != 0)
                hZ = true;
        }

        if (xr != 0)
            return nums.size();

        if (hZ)
            return nums.size() - 1;

        return 0;
    }
};