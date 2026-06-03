class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = prices[0];
        int highest = 0;

        for (int i = 0; i < prices.size(); i++){
            if(prices[i]<lowest){
                lowest=prices[i];
            }
            if(prices[i]-lowest > highest){
                highest = prices[i]-lowest;
            }
            
        }
        return highest;
    }
};