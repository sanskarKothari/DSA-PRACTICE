class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int original=n;
         
        int product=1;
        while(n>0){
        int digit = n%10;
       
        sum=sum+digit;
        product=product*digit;

        n=n/10;
        }
        int s=sum+product;
        if(original%s==0){
            return true;
        }
        else{
            return false;
        }


        
    }
};