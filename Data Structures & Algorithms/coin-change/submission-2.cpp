class Solution {
public:
    vector<int> dp;

    int coinChange(vector<int>& coins, int amount) {
        dp.assign(amount + 1, -1);

        int ans = solve(coins, amount);

        return ans == INT_MAX ? -1 : ans;
    }

    int solve(vector<int>& coins, int amount) {

        // Base case
        if (amount == 0)
            return 0;

        // Impossible
        if (amount < 0)
            return INT_MAX;

        // Already calculated
        if (dp[amount] != -1)
            return dp[amount];

        int ans = INT_MAX;

        for (int coin : coins) {

            int result = solve(coins, amount - coin);

            if (result != INT_MAX) {
                ans = min(ans, result + 1);
            }
        }

        return dp[amount] = ans;
    }
};