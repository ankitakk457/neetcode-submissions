class Solution {
    vector<int>dp=vector<int>(201,-1);
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];

        dp.assign(n+1,-1);
        int without_first_house=dpp(nums,n,1);

        dp.assign(n+1,-1);
        int without_last_house=dpp(nums,n-1,0);

        return max(without_first_house,without_last_house);
    }

    int dpp(vector<int>& nums,int n,int start){

        if(n<=start)return 0;
        if(dp[n]!=-1)return dp[n];

        return dp[n]=max(dpp(nums,n-1,start),nums[n-1]+dpp(nums,n-2,start));
    }
};
