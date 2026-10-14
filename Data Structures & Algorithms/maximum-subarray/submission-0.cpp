class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max_sum=nums[0];
        int curr_sum=nums[0];
        int i=1;
        while(i<n){
           curr_sum=max(nums[i],curr_sum+nums[i]);
           max_sum=max(max_sum,curr_sum);
           i=i+1;
        }

        return max_sum;

    }
};
