class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int size=nums.size();
        
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<size;i++){
            long long target1=target-nums[i];
           
            
            if(i > 0 && nums[i] == nums[i-1]) {
                continue;
            }

            for(int j=i+1;j<size-1;j++){
                long long target2=target1-nums[j];
                int l=j+1;
                int r=size-1;
                if(j> i+1 && nums[j] == nums[j-1]) {
                continue;
                }
                while(l<r){
                    if(nums[l]+nums[r]==target2){
                        vector<int> temp = {nums[i], nums[j], nums[l], nums[r]};
                        sort(temp.begin(),temp.end());
                        s.insert(temp);
                        l+=1;
                        r-=1;

                    }
                    if(nums[l]+nums[r]<target2){
                        l+=1;
                    }
                    if(nums[l]+nums[r]>target2){
                        r-=1;
                    }
                }

            }
        }
        vector<vector<int>> final(s.begin(),s.end());
        return final;
        
    }
};