class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int flag=0;
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            int temp1=0;
            int temp2=0;
            
            if(tokens[i]=="+"){
                        temp1=st.top();
                        st.pop();
                        temp2=st.top();
                        st.pop();
                        
                        st.push(temp1+temp2);
            }
            else if(tokens[i]=="-"){
                        temp1=st.top();
                        st.pop();
                        temp2=st.top();
                        st.pop();
                        
                        st.push(temp2-temp1);
            }
            else if(tokens[i]=="*"){
                        temp1=st.top();
                        st.pop();
                        temp2=st.top();
                        st.pop();
                        
                        st.push(temp1*temp2);
            }
            else if(tokens[i]=="/"){
                        temp1=st.top();
                        st.pop();
                        temp2=st.top();
                        st.pop();
                        
                        st.push(temp2/temp1);
            }
                
            else {
                    st.push(stoi(tokens[i]));
            }
        }
        return st.top();
        
    }
};
