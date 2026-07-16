class Solution {
public:
    int calPoints(vector<string>& nums) {
        stack<int>st;
       
        for(int i=0;i<nums.size();i++){
            if(nums[i]=="+"){
                int temp1=st.top();
                st.pop();
                int temp2=st.top();
                st.push(temp1);
                st.push(temp1+temp2);
                

            }
            else if(nums[i]=="C"){
                st.pop();
            }
            else if(nums[i]=="D"){
                int temp4=st.top();
                st.push(temp4*2);
            }
            else{
                
                st.push(stoi(nums[i]));
                

            }
        }
        int target=0;
        
        while(!st.empty()){
            target+=st.top();
            st.pop();

        }
        return target;
        
    }
};