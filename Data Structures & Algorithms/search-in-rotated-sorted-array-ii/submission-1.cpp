class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[l]<=nums[mid]){
                if(target==nums[mid]){
                    ans=mid;
                    break;
                }
                if(nums[l] == nums[mid] && nums[mid] == nums[r]){
                        l++;
                        r--;
                }
                else if(target<nums[mid] && target>=nums[l]){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if(target==nums[mid]){
                    ans=mid;
                    break;
                }
                if(nums[l] == nums[mid] && nums[mid] == nums[r]){
                        l++;
                        r--;
                }
                else if(target>nums[mid] && target<=nums[r]){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }


            }
        }
        if(ans==-1){
            return false;
        }
        else{
            return true;

        }
        
    }
};