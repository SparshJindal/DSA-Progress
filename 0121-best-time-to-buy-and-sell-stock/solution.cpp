class Solution {
public:
    int maxProfit(vector<int>& prices) {

    int min = INT_MAX ;   
    int n = prices.size() ;
    int max_profit = 0;

    for (int i = 0 ; i < n ; i++ ) {
        
        if(prices[i] < min) {
            min = prices[i];
        }
        else if (prices[i] - min > max_profit) {
            max_profit = prices[i] - min;

        }

    }    
    return max_profit;
    }
};
