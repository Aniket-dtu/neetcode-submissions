class Solution {
public:
    int trap(vector<int>& nums) {
        int size=nums.size();
       

        int area=0;
        int l=0;
        
        while(l<size-1){
            int r=l+1;
            int best=-1;
            int sum=0;
            for(int i=l+1;i<size;i++){
                if(nums[i]>=nums[l]){
                    best=i;
                    break;
                }
                if(best==-1 || nums[i] > nums[best]){
                    best = i;
                }
                        
                
            }
            for(int i=l+1;i<best;i++){
                sum+=nums[i];
            }
            area+=(best-l-1)*min(nums[l],nums[best])-sum;
            l=best;
            
        }
        return area;
    }
};
