class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        
        int count=0;
        if(s.size()==0){
            return 0;
        }
        
        for(int l=0;l<s.size();l++){
            vector<int>mapp(256,1);
            mapp[s[l]]=0;
            int tempcount=1;
            for(int r=l+1;r<s.size();r++){
                if(mapp[s[r]]!=0){
                    tempcount++;
                    mapp[s[r]]=0;

                }
                else{
                    break;
                }
            }
            count=max(tempcount,count);



        }
        return count;
        
    }
};
