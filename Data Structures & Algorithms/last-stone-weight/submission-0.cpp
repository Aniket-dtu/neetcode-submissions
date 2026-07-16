class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size()-1;
        if(nums.size()==1){
            return nums[0];
        }
        while(nums[size-1]!=-1){
            if(nums[size]==nums[size-1]){
                nums[size]=-1;
                nums[size-1]=-1;
            }
            else{
                nums[size]=nums[size]-nums[size-1];
                nums[size-1]=-1;
            }
            sort(nums.begin(),nums.end());


        }
        if(nums[size]==-1){
            return 0;
        }
        return nums[size];
    }   
};
