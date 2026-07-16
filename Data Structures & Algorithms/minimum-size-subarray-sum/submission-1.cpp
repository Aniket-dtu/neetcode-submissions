class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int size=nums.size();
        int count=INT_MAX;
        int sum2=0;
        for(int i=0;i<size;i++){
            sum2+=nums[i];

        }
        if(sum2<target){
            return 0;
        }

        for(int i=0;i<size;i++){
            int sum=0;
            int j=i;
            int l=0;
            while(j<size && sum<target){
                sum=sum+nums[j];
                j++;
                l++;
            }
            if(sum >= target && l < count){
                count = l;
            }
        
        }
        return count;
        
    }
};