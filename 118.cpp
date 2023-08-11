class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> dp(numRows);
        for(int i = 1; i <= numRows; ++i){
            for(int k = 1; k <= i; ++k) dp[i - 1].push_back(1);
            for(int j = 1; j <= i; ++j){
                if(i >= 3 && j != 1 && j != i){
                    dp[i - 1][j - 1] = dp[i - 2][j - 2] + dp[i - 2][j - 1];
                }
            }
        }
        return dp;
    }
};