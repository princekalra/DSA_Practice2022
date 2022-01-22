//Stone Game IV
class Solution {
public:

    bool winnerSquareGame(int n) {
       vector<bool>dp(n+1,false);
        dp[1] = true;
        dp[0] = false;
        for(int i=2;i<=n;i++){
            for(int j=1;j*j<=i;j++){
                if(!dp[i-j*j]){
                    dp[i] = true;
                }
            }
        }
        return dp[n];
    }
};