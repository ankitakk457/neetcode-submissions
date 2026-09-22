class Solution {
public:
    int findMin(vector<int> &nums) {
        int ans= INT_MAX;
        int left = 0;
        int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        //when pass the rotation we will eventually get the sorted array that means arr[low] will be having minimum so we directly return ans;
        if(nums[left]<=nums[right]){
            ans=min(ans,nums[left]);
            break;
        }
       //here we eliminate left half after storing it minimum value that is arr[low]
        if (nums[left] <= nums[mid]) {
             ans=min(ans,nums[left]);
             left= mid + 1;
        }
        // here we eliminate right half after storing its min value arr[mid]
        else {
            
             ans=min(ans,nums[mid]);
             right=mid-1;
             
        }
      
    }

    return ans;;
    }
};
