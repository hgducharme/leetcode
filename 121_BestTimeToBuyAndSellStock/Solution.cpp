#include "Solution.hpp"

int Solution::maxProfit(std::vector<int>& prices)  {
    int largestProfit = 0;
    int runningProfit = std::numeric_limits<int>::min();
    int boughtPrice = prices[0];

    for (int i = 1; i < prices.size(); i++) {
        int currentPrice = prices[i];
        int currentProfit = currentPrice - boughtPrice;

        if (currentProfit >= 0) {
            if (currentProfit <= currentPrice) {
                runningProfit = currentProfit;
            }
            else {
                boughtPrice = currentPrice;
                runningProfit = 0;
            }
        }
        else {
            if (currentProfit > currentPrice) {
                runningProfit = currentProfit;
            }
            else {
                boughtPrice = currentPrice;
                runningProfit = 0;
            }
        }
        
        largestProfit = std::max(runningProfit, largestProfit);
    }

    return largestProfit;
}