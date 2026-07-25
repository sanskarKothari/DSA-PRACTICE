class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char c:s){
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }
            else{
                if(st.empty())return 0;
                char k=st.top();
                   st.pop();
                if((c==')' && k!='(')||(c=='}' && k!='{')||(c==']' && k!='[')){
                    return 0;
                }
             

            }
        }
        return st.empty();
        
    }
};