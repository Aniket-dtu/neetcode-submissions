class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int temp=0;
        int size=nums.size();
        for(int i=0;i<size;i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]>1){
                temp=nums[i];
                break;
            }
        }
        return temp;
    }
};
