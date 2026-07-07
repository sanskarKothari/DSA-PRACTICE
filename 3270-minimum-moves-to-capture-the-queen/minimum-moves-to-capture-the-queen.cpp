class Solution {
public:
    int minMovesToCaptureTheQueen(int a, int b,
                                  int c, int d,
                                  int e, int f) {

        
        if (a == e) {
            if (!(c == a &&
                  min(b, f) < d &&
                  d < max(b, f)))
                return 1;
        }

        if (b == f) {
            if (!(d == b &&
                  min(a, e) < c &&
                  c < max(a, e)))
                return 1;
        }

       
        if (abs(c - e) == abs(d - f)) {

            bool blocked = false;

            if (abs(c - a) == abs(d - b)) {

                if (abs(c - a) + abs(a - e) == abs(c - e) &&
                    abs(d - b) + abs(b - f) == abs(d - f))
                    blocked = true;
            }

            if (!blocked)
                return 1;
        }

        return 2;
    }
};