class Solution {
public:
    int cnt = 0;

    void merge(vector<int>& a, int l, int m, int r) {

        int j = m + 1;

        for (int i = l; i <= m; i++) {
            while (j <= r && (long long)a[i] > 2LL * a[j])
                j++;

            cnt += j - (m + 1);
        }

        vector<int> temp;

        int i = l;
        j = m + 1;

        while (i <= m && j <= r) {

            if (a[i] <= a[j])
                temp.push_back(a[i++]);

            else
                temp.push_back(a[j++]);
        }

        while (i <= m)
            temp.push_back(a[i++]);

        while (j <= r)
            temp.push_back(a[j++]);

        for (int k = l; k <= r; k++)
            a[k] = temp[k - l];
    }

    void mergeSort(vector<int>& a, int l, int r) {

        if (l >= r)
            return;

        int m = (l + r) / 2;

        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);

        merge(a, l, m, r);
    }

    int reversePairs(vector<int>& nums) {

        mergeSort(nums, 0, nums.size() - 1);

        return cnt;
    }
};