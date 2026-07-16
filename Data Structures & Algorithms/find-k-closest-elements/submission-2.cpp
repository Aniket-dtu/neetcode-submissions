class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        int size=nums.size();
        int l=0;
        int r=size-1;
        vector<int> temp;

        while(r-l+1>k){
            if(abs(nums[l]-x)>abs(nums[r]-x)){
                l++;
            }
            else{
                r--;
            }
        }
        for(int i=l;i<=r;i++){
            temp.push_back(nums[i]);
        }
        
        return  temp;
       
        

        
        
    }
};