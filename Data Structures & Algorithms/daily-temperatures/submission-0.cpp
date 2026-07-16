class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        stack<int>st;
        st.push(0);
        vector<int> temp(nums.size(), 0);
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[st.top()]){
                st.push(i);
            }
            else{
                while(st.size()!=0 && nums[st.top()]<nums[i]){
                    temp[st.top()] = i - st.top();
                    st.pop();
                }
            }
            st.push(i);
        }
        return temp;
        
    }
};
