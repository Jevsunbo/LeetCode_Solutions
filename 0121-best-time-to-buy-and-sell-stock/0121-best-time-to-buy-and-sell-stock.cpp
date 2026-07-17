class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = prices[0];
        int highest_profit = 0;

        for(int i=0; i<prices.size(); i++){
            if(lowest > prices[i]){
                lowest = prices[i];
            }
            if(highest_profit < prices[i] - lowest){
                highest_profit = prices[i] - lowest;
            }
        }
        return highest_profit;
    }
};