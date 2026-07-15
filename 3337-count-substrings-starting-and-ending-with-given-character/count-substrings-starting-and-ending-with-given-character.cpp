class Solution {
public:
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}
    long long countSubstrings(string s, char c) {

        int ct=0;
        for(auto i:s){
            if(i==c)ct++;
        }
        
        return (long long)ct*(ct+1)/2;
        
    }
};