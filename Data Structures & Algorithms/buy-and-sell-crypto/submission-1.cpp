class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int i=0;
        int j=1;
        while (j<prices.size()){
            if(prices[j]>prices[i]){
                int profit=prices[j]-prices[i];
                ans=max(profit,ans);
               
            }
            else{
                i=j;
            }
            j++;
        }
        // for(int i=0;i<prices.size();i++){
        //     for(int j=i+1;j<prices.size();j++){
        //         if(prices[i]<prices[j]){
        //             int profit=prices[j]-prices[i];
        //             ans=max(ans,profit);
        //         }
        //     }
        // }
        return ans;
    }
};
