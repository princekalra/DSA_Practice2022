class Solution {
public:
   int maxCoins(vector<int>& nums) {
        int n = nums.size();
        if(n==0)
            return 0;
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int len=0;len<n;len++){
            for(int i=0;i+len<n;i++){
                int j = i+len;
                for(int k=i;k<=j;k++){
                    int left_num = i==0?1:nums[i-1];
                    int right_num = j==n-1?1:nums[j+1];
                    int left = k==i?0:dp[i][k-1];
                    int right = k==j?0:dp[k+1][j];
                    dp[i][j] = max(dp[i][j],left_num*nums[k]*right_num+left+right);
                }
            }
        }
        return dp[0][n-1];
    }
};