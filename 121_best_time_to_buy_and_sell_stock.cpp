class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimumPrice = INT_MAX;
        int maximumDifference = INT_MIN;
        for(int i = 0 ; i < prices.size() - 1; i++){
            minimumPrice = min(minimumPrice, prices[i]);
            maximumDifference = max(maximumDifference, prices[i+1]-minimumPrice);

        }
        if (maximumDifference <=0) return 0;
        return maximumDifference;
    }
};