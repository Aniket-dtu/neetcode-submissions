class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int>mpp;
        int size1=s1.size();
        int size=s2.size();
        int i=0;
        int j=size1;
        while(j<=size){
            mpp.clear();
            for(int x=0;x<size1;x++){
                mpp[s1[x]]++;
            }
            for(int k=i;k<j;k++){
                if(mpp.find(s2[k])!=mpp.end()){
                    mpp[s2[k]]--;
                    if(mpp[s2[k]]==0){
                        mpp.erase(s2[k]);
                    }
                }
            }
            if(mpp.size()==0){
                return true;
            }
            i++;
            j++;
        }
        return false;
        

    }
};
