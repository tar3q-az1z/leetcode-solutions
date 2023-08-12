class Solution {
public:
    bool divisorGame(int n) {
        vector<int> dp(n + 5, 0);
        dp[1] = 0;
        dp[2] = 1;
        for(int i = 3; i <= n; ++i){
            for(int j = 1; j * j <= i; ++j){
                if(i % j == 0){
                    if(dp[i - j] == 0) dp[i] = 1;
                }
            }
        }
        return dp[n];
    }
};