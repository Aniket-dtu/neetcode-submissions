class Solution {
public:
    bool isAnagram(string s, string t) {
        map<string,int>mpp;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        mpp[s]++;
        mpp[t]++;   
        if(mpp[s]==2){
            return true;
        }
        return false;
    }
};