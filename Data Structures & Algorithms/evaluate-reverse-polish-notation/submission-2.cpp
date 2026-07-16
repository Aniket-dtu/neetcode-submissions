class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int flag=0;
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                if(st.size()>0){
                    if(tokens[i]=="+"){
                        int temp1=st.top();
                        st.pop();
                        int temp2=st.top();
                        st.pop();
                        
                        st.push(temp1+temp2);
                    }
                    if(tokens[i]=="-"){
                        int temp1=st.top();
                        st.pop();
                        int temp2=st.top();
                        st.pop();
                        
                        st.push(temp2-temp1);
                    }
                    if(tokens[i]=="*"){
                        int temp1=st.top();
                        st.pop();
                        int temp2=st.top();
                        st.pop();
                        
                        st.push(temp1*temp2);
                    }
                    if(tokens[i]=="/"){
                        int temp1=st.top();
                        st.pop();
                        int temp2=st.top();
                        st.pop();
                        
                        st.push(temp2/temp1);
                    }
                }
                
            }
            else{
                    st.push(stoi(tokens[i]));
            }
        }
        return st.top();
        
    }
};
