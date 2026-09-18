class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // if(nums.size()==0){
        //     return 0;
        // }
        // sort(nums.begin(),nums.end());
        // int longest_count=1;
        // int count=1;
        //     for(int i=1;i<nums.size();i++){
        //      if(nums[i]==nums[i-1]+1){
        //         count++;
        //      }
        //      else if(nums[i]==nums[i-1]){
        //         continue;
        //      }
        //      else{
        //         longest_count=max(longest_count,count);
        //         count=1;
        //      }
        //     }
        //     longest_count=max(longest_count,count);
        //     return longest_count;

         unordered_set<int>uset(nums.begin(),nums.end());
         int longest_count=0;
         
         for(auto i:uset)
         {
            if(uset.find(i-1)==uset.end())
            {
                int count=1;
                int x=i;
                while(uset.find(x+1)!=uset.end())
                {
                    count++;
                    x+=1;
                }
                longest_count=max(longest_count,count);

            }
         }
         return longest_count;
    }
        
};
