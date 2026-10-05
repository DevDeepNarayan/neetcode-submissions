class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = prices[0];

        for (int& sell : prices) {
            minPrice = min(minPrice, sell);
            maxProfit = max(maxProfit, sell - minPrice);
        }
        return maxProfit;
    }
};
