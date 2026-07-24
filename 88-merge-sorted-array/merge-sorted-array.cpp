class Solution {
public:
    int nextGap(int gap) {
        if (gap <= 1) return 0;
        return (gap + 1) / 2;
    }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int gap = nextGap(m + n);

        while (gap > 0) {

            int i = 0;
            int j = gap;

            while (j < m + n) {

               
                if (i < m && j < m) {
                    if (nums1[i] > nums1[j])
                        swap(nums1[i], nums1[j]);
                }
             
                else if (i < m && j >= m) {
                    if (nums1[i] > nums2[j - m])
                        swap(nums1[i], nums2[j - m]);
                }
              
                else {
                    if (nums2[i - m] > nums2[j - m])
                        swap(nums2[i - m], nums2[j - m]);
                }

                i++;
                j++;
            }

            gap = nextGap(gap);
        }

        for (int i = 0; i < n; i++)
            nums1[m + i] = nums2[i];
    }
};