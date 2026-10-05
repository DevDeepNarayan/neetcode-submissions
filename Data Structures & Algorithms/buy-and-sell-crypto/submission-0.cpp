class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int i = 0; // Buy day
        int maxGain = 0;

        for (int j = 1; j < prices.size(); ++j) {
            if (prices[j] < prices[i]) {
                i = j; // better to buy at a cheaper price
            } else {
                maxGain = max(maxGain, prices[j] - prices[i]);
            }
        }

        return maxGain;
    }
};
