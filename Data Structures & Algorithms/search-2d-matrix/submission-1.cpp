class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int c=nums[0].size();
        int r=nums.size();
        int rr=0;
        for(int i=0;i<r;i++){
            if(nums[i][c-1]>=target){
                rr=i;
                break;
            }

        }
        int l=0;
        int j=c-1;
        int flag=0;
        while(l<=j){
            int mid=(l+j)/2;
            if(nums[rr][mid]==target){
                flag=1;
                return true;
                break;
            }
            else if(nums[rr][mid]>target){
                j=mid-1;
            }
            else if(nums[rr][mid]<target){
                l=mid+1;
            }

        }
        if(flag==0){
            return false;
        }
        else if(flag==1){
            return true;
        }
        
    }
};
