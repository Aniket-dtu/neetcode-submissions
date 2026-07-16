class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int j=0;
        int size=nums.size();
        int flag=1;
        while(j<size){
            int temp=nums[j];
            int i=j+1;
            while(i<=j+k && i<size){
                if(nums[i]==temp){
                    flag=0;
                }
                i++;
            }
            i=j-1;
            while(i>=0 && i>=j-k){
                if(nums[i]==temp){
                    flag=0;
                }
                i--;

            }

            j++;
        }
        if(flag==0){
            return true;
        }
        if(flag==1){
            return false;
        }
    }
};