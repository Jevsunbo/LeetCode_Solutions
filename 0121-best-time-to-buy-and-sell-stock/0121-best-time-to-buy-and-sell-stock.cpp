// Problem: Best Time to Buy and Sell Stock (#121)
// Pattern: Single pass, track running minimum
// Time: O(n) | Space: O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest, highest = 0;
        // find the lowest price day (buy) and the highest price (profit)
        lowest = prices[0];
        for(int i = 0; i < prices.size(); i++){
            // find lowest price
            if(prices[i] < lowest){
                lowest = prices[i];
            }
            // compare that to next elements and find highest profit
            if(prices[i]-lowest > highest){
                highest = prices[i]-lowest;
            }
        }
        return highest;
    };
};