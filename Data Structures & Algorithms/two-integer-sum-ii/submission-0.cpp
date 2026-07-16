class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>temp;
        int l=0;
        int r=nums.size()-1;
        while(l<r){
            if(nums[l]+nums[r]==target){
                temp.push_back(l+1);
                temp.push_back(r+1);
                break;
            }
            else if(nums[l]+nums[r]<target){
                l++;
            }
            else if(nums[l]+nums[r]>target){
                r--;
            }
        }
        return temp;
        
    }
};
