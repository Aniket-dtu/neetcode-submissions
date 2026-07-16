class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        vector<long long> k;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        
        long long l=1;
        long long r=maxi;
        while(l<r){
            long long mid=(l+r)/2;
            long long hours=0;
            for(long long num : nums) {
                hours += (num + mid - 1) / mid;
            }
            if(hours<=h){
                r=mid;
            }
            else{
                l=mid+1;
            }

        }
        return r;

        
    }
};
