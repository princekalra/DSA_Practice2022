//Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==0){
            return 0;
        }
        int mi = prices[0];
        
        int ans=0;
        for(int i=0;i<n;i++){
            ans = max(ans,prices[i]-mi);
            mi = min(mi,prices[i]);
        }
        return ans;
    }
};