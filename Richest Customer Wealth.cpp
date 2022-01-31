//Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            int m = accounts[i].size();
            int sum =0;
            for(int j=0;j<m;j++){
                sum+=(accounts[i][j]);
            }
            ans = max(ans,sum);
        }
        return ans;
    }
};