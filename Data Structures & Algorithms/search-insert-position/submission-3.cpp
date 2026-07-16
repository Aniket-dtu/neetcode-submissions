class Solution {
public:
    int searchInsert(vector<int>& nums, int key) {
        int l=0;
        int r=nums.size()-1;
        int flag=0;
        int temp=0;
        int bl=0;
        int br=0;
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
                flag=1;
            }
        }
        if(flag==0){
            return l;
        }
    }
};