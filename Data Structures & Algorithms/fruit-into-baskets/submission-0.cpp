class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int size=nums.size();
        int j=0;
        int i=0;
        map<int,int>mpp;

        
        
        int maxi=0;
        while(j<size){
            mpp[nums[j]]++;
            int sum=0;
            
            if(mpp.size()<2){
                 maxi=max(j-i+1,maxi);
                j++;

            }
            else if(mpp.size()==2){
                
                maxi=max(j-i+1,maxi);
                j++;
            }
            else if(mpp.size()>2){
                while(mpp.size()!=2){
                    mpp[nums[i]]--;
                    if(mpp[nums[i]]==0){
                        mpp.erase(nums[i]);
                    }
                    i++;
                    
            
                    
                }
                maxi=max(j-i+1,maxi);
                j++;
            }
            


        }
        return maxi;
        
    }
};