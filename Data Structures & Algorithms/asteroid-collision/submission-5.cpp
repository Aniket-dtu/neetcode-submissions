class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        stack<int>st;
        vector<int> temp;
        st.push(nums[0]);
        for(int i=1;i<nums.size();i++){
            
            if(nums[i]>0){
                st.push(nums[i]);
            }
            else{
                while(st.size()!=0 && st.top()<abs(nums[i]) && st.top()>0){
                st.pop();
                }
                if(st.size()==0){
                    st.push(nums[i]);
                }
                else if(st.top()==abs(nums[i])){
                st.pop();
                }
                else if(st.top()<0){
                    st.push(nums[i]);
                }

            }
            
            
            
        }
        
        while(st.size()!=0){
            temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        return temp;


        
    }
};