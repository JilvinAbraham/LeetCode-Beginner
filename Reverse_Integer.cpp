class Solution {
public:
    int reverse(int x) {
        int rem;
        long long rev=0,prev=0;
        int flag=0;
        if(x<0){
            flag=-1;
        }
        x=abs(x);
        while(x!=0){            
            rem = x%10;
            if(abs(rev)*10 > 2147483647){
                return 0;
            }
            if(rev*10>INT_MAX){
                return 0;
            }
            rev = rev*10+rem;
            
            if((rev-rem)/10 != prev){
                return 0;
            }
            prev = rev;
            x=x/10;
        }
        
        if(flag==-1){
            return -rev;
        }
        return rev;
        
    }
};