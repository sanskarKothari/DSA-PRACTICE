class Solution {
public:
    bool judgeSquareSum(int c) {
        int s = 0;
        int e = sqrt(c);
        int m = s + (e - s) / 2;

        while (s <= e) {  
            long long p = 1LL * s * s + 1LL * e * e;  

            if (p == c) {
                return true;
            }
            else if (p > c) {
                e--;
            }
            else {
                s++;
            }

            m = s + (e - s) / 2;  
        }
        return false;
    }
};