class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int j=0;
        int i=0;
        int tempprofit=0;
        int profit=0;
        int size=nums.size();
        while(j<size){
            tempprofit=nums[j]-nums[i];
            if(nums[j]<nums[i]){
                i=j;
            

            }
            int mini=i;
            if(profit<=tempprofit ){
                profit=tempprofit;

                


            }
            j++;
        }
        return profit;
        
    }
};
