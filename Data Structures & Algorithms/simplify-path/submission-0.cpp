class Solution {
public:
    string simplifyPath(string s) {
        int size=s.size();
        int  i=0;
        vector<string>temp;
        for(int j=0;j<size;j++){
            if(s[j]!='/'){
                i=j;
                break;
            }
        }
        while(i<size){
            string st;
            while(i < size && s[i] != '/'){
                st.push_back(s[i]);
                i++;
            }
            while(i < size && s[i] == '/'){
                i++;
            }
            temp.push_back(st);

        }
        stack<string>x;
        for(auto it: temp){
            if(it==".." && !x.empty()){
                if (!x.empty())
                        x.pop();
            }
            else if(it == "." || it == ""){
                continue;
            }
            else if(it!=".." && it!="."){
                x.push(it);
            }
        }
        vector<string>ss;
        while(!x.empty()){
            ss.push_back(x.top());
            x.pop();

        }
        reverse(ss.begin(),ss.end());
        string ans;
        if(ss.size()==0){
            return "/";
        } 
        for(auto it:ss){
            ans+="/";
            ans+=it;
        } 
        return ans;      
        
    }
};