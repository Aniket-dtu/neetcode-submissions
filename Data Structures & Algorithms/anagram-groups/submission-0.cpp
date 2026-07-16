class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& nums) {
        map<string,vector<string>>mpp;
        int size=nums.size();
        for(int i=0;i<size;i++){
            string s=nums[i];
            sort(s.begin(),s.end());
            mpp[s].push_back(nums[i]);
        }
        vector<vector<string>> ans;
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
        
    }
};
