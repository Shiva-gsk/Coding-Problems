class Solution {
    public:
        const int mod = 1e9+7;
        int dp[1001][2];
        int numTilings(int n) {
            return solve(0, n, false);
        }
        long solve(int i, int n, bool previousGap){
            if(i>n) return 0;
            if(i==n) return !previousGap;
            if(dp[i][previousGap]) return dp[i][previousGap];
            if(previousGap){
                dp[i][previousGap] = (solve(i+1, n, true) + solve(i+1, n , false)) % mod;
                return dp[i][previousGap];
            }
            dp[i][previousGap] = (solve(i+1, n , false) + solve(i+2, n, false)+ 2*solve(i+2, n, true)) % mod;
            return dp[i][previousGap];
        }
};