class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int size=nums.size();
        vector<int>temp;

        int l=0;
        int r=k-1;
        while(l<=size-k && r<=size){
            int maxi=INT_MIN;
            for(int i=l;i<=r;i++){
                maxi=max(maxi,nums[i]);
            }
            temp.push_back(maxi);
            l++;
            r++;
        }
        return temp;
    }
};