class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        int i=0;
        int n=s.size();
        int j=n-1;
        while(i<j){
            if(s[i]!=s[j]){
                return 0;
            }
            i++;
            j--;
        }
        return 1;
    }
};