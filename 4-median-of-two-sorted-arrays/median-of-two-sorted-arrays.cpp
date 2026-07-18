class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        if (a.size() > b.size()) swap(a, b);

        int n = a.size(), m = b.size();
        int l = 0, r = n;

        while (l <= r) {
            int i = (l + r) / 2;
            int j = (n + m + 1) / 2 - i;

            int al = (i == 0 ? INT_MIN : a[i - 1]);
            int ar = (i == n ? INT_MAX : a[i]);
            int bl = (j == 0 ? INT_MIN : b[j - 1]);
            int br = (j == m ? INT_MAX : b[j]);

            if (al <= br && bl <= ar) {
                if ((n + m) % 2 == 0)
                    return (max(al, bl) + min(ar, br)) / 2.0;
                else
                    return max(al, bl);
            }
            else if (al > br) r = i - 1;
            else l = i + 1;
        }

        return 0.0;
    }
};