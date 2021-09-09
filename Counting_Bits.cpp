class Solution {
public:
    
    int countSetBits(int n){
        int c=0;
        while(n != 0){
            
            int rbsm = n & -n;
            n -= rbsm;
            c++;
        
        }
        return c;
        
    }
    vector<int> countBits(int n) {
        
        vector<int> v;
        for(int i=0;i<=n;i++){
            v.push_back(countSetBits(i));
        }
        return v;
        
    }
};