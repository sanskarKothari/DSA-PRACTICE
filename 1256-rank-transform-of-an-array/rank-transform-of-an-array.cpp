class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> mp;
        vector<int> temp = arr;

        sort(temp.begin(), temp.end());

        int rank = 1;
        for (int x : temp) {
            if (!mp.count(x))
                mp[x] = rank++;
        }

        for (int i = 0; i < arr.size(); i++) {
            arr[i] = mp[arr[i]];
        }

        return arr;
    }
};