class Solution {
public:
    int maxArea(vector<int>& nums) {
        int  max=0;
        int r=nums.size()-1;
        int l=0;
        int area=0;
        while(r>=l){
            if(nums[l]>=nums[r]){
                area=nums[r]*(r-l);
                if(area>max){
                    max=area;
                }
                r-=1;
                
            }
            if(nums[l]<=nums[r]){
                area=nums[l]*(r-l);
                if(area>max){
                    max=area;
                }
                l+=1;
                
            }
        }
        return max;
        
    }
};
