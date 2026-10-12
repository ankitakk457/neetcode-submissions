 
class Solution {
    vector<int>dp=vector<int>(101,-1);
   public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        return dpp(nums,n);
    }
    int dpp(vector<int>& nums,int n){
        if(n<=0)return 0;
        if(dp[n]!= -1) return dp[n];

        return dp[n]= max(dpp(nums,n-1), (nums[n-1] + dpp(nums,n-2)));
    }
};
