// Problem: Best Time to Buy and Sell Stock (#121)
// Pattern: Single pass, track running minimum
// Time: O(n) | Space: O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = 0, highest = 0;
        lowest = prices[0];

        for(int i = 0; i < prices.size(); i++){
            if (prices[i]<lowest){
                lowest = prices[i];
            }
            if(prices[i] - lowest > highest){
                highest = prices[i] - lowest;
            }
        }
        return highest;
    };
};