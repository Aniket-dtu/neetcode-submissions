class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int>  mpp;
        int size=nums.size();
        for(int i=0;i<size;i++){
            mpp[nums[i]]++;
        }
        int count=0;
        int temp=INT_MAX;
        int tempcount=1;
        
        for(auto it:mpp){
            if(it.first-1==temp){
                tempcount++;
                count=max(count,tempcount);
            }
            else{
                tempcount=1;
                count=max(count,tempcount);
            }
            temp=it.first;
        }
        return count;
        
    }
};