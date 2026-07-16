class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        int count=0;
        int size=nums.size();
        int i=0;
        int j=k;
        int sum=0;
        for(int x=0;x<k;x++){
            sum+=nums[x];
        }
        while(j<=size ){
            int avg=sum/k;
            if(avg>=threshold){
                count++;
            }
            if(j==size){
                break;
            }
            sum+=nums[j];
            sum-=nums[i];
            i++;
            j++;

            
            
            
        }
        return count;
        
    }
};