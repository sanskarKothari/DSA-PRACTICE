class Solution {
    int f(vector<int>& source, vector<int>& target) {
        int a = source[0];
        int b = source[1];
        int c = target[0];
        int d = target[1];

        if (a == c && b == d) {
            return 0;
        }

        
        if ((a + b) % 2 != (c + d) % 2) {
            return -1;
        }
        if (abs(a - c) == abs(b - d)) {
            return 1;
        }

        
        return 2;
    }

public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        return f(source, target);
    }
};