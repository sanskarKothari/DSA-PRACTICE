class Solution {
public:
    int numberOfSpecialChars(string word) {
     int fr1[26]={0};
     int fr2[26]={0};
     for(auto i:word){
        if(i>='A' && i<='Z'){
            fr1[i-'A']++;
        }
     }
       for(auto i:word){
        if(i>='a' && i<='z'){
            fr2[i-'a']++;
        }
     }
     int c1=0;
    for(int i=0;i<26;i++){
        if(fr1[i]!=0 && fr2[i]!=0)c1++;
    }
    return c1;


        
    }
};