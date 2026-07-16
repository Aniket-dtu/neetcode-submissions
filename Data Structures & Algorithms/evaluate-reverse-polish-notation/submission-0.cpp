class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int flag=0;
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            int temp1=0;
            int temp2=0;
            int temp3=0;
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                if(st.size()>0){
                    if(tokens[i]=="+"){
                        temp1=st.top();
                        st.pop();
                        temp2=st.top();
                        st.pop();
                        temp3=temp1+temp2;
                        st.push(temp3);
                    }
                    if(tokens[i]=="-"){
                        temp1=st.top();
                        st.pop();
                        temp2=st.top();
                        st.pop();
                        temp3=temp2-temp1;
                        st.push(temp3);
                    }
                    if(tokens[i]=="*"){
                        temp1=st.top();
                        st.pop();
                        temp2=st.top();
                        st.pop();
                        temp3=temp1*temp2;
                        st.push(temp3);
                    }
                    if(tokens[i]=="/"){
                        temp1=st.top();
                        st.pop();
                        temp2=st.top();
                        st.pop();
                        temp3=temp2/temp1;
                        st.push(temp3);
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
