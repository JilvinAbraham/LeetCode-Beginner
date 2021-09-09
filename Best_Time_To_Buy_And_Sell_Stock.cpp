class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int min_price = INT_MAX;
        int max_profit = 0;
        
        for(auto n: prices){
            min_price = min(min_price,n);
            int profit = n-min_price;
            max_profit = max(max_profit,profit);
        }
        return max_profit;
        
    }
};