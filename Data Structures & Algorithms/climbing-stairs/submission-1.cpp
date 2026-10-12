vector<int>dp(46,-1);
class Solution {
public:
    int climbStairs(int n) {
        if(dp[n]!=-1)return dp[n];
        if(n<=2) return dp[n]=n;
        int left=climbStairs(n-1);
        int right=climbStairs(n-2);
        return dp[n]= left + right;
        
    }
};
