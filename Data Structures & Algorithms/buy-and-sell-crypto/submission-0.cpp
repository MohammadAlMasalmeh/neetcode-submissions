class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curMin = prices[0];
        int minIndex = 0;
        int maxProfit = 0;
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < curMin){
                curMin = prices[i];
                minIndex = i;
            }
            int cur = prices[i] - curMin;
            maxProfit = max(maxProfit, cur);
        }
        return maxProfit;
    }
};
