class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin(), nums.end());
        int size=nums.size();
        int count=0;
        int l=0;
        int r=size-1;
        while(l<r){
            if(l<r && nums[l]+nums[r]<=limit){//1 2 2 3 3 
                count++;
                l+=1;
                r-=1;
               
            }
            else{
                r-=1;
                count++;
            }
            if(l==r){
                count++;
            }
            
        }
        return count;


        
    }
};