class Solution {
public:
    int characterReplacement(string s, int k) {
        int j=0;
        int i=0;
        int size=s.size();
        map<char,int> mpp;
        int count=0;
        char major;
        
        while(j<size){
            mpp[s[j]]++;
            int maxi=0;
            int sum=0;
            for(auto it: mpp){
                if(it.second>=maxi){
                    major=it.first;
                    maxi = it.second;
                }
            }
            for(auto it: mpp){
                if(it.first==major){
                    continue;
                }
                else{
                    sum+=it.second;
                }
            }
            
            if(sum<=k){
                count=max(count,j-i+1);
                j++;
            }
            if(sum>k){
                while((j - i + 1) - maxi>k){
                    mpp[s[i]]--;
                    
                    if(mpp[s[i]]==0){
                        mpp.erase(s[i]);
                    }
                    i++;

                }
                count=max(count,j-i+1);
                j++;
            }
        }
        return count;
    }
};
