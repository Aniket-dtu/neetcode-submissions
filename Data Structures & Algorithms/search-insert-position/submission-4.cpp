class Solution {
public:
    int searchInsert(vector<int>& nums, int key) {
        int l=0;
        int r=nums.size()-1;
        
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]>key){
                r=mid-1;
            }
            else if(nums[mid]<key){
                l=mid+1;
            }
            else if(nums[mid]==key){
                return mid;
                
            }
        }
        
            return l;
    
    }
};