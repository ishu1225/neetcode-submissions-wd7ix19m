class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int mini=INT_MAX;
        int maxi=0;
        for(int i=0;i<prices.size();i++){
            mini=min(mini, prices[i]);
            if(maxi>prices[i])maxi=prices[i];
            if(maxi<prices[i]) maxi=prices[i];
            profit=max(profit,maxi-mini);
        }
        return profit;
    }
};
