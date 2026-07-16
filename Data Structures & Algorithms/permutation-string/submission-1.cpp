class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.size() > s2.size())
            return false;

        vector<int> freq1(26,0), freq2(26,0);

        // Frequency of s1
        for(char c : s1)
            freq1[c-'a']++;

        // First window
        for(int i=0;i<s1.size();i++)
            freq2[s2[i]-'a']++;

        if(freq1 == freq2)
            return true;

        // Sliding window
        for(int i=s1.size(); i<s2.size(); i++){

            // Remove left character
            freq2[s2[i-s1.size()]-'a']--;

            // Add right character
            freq2[s2[i]-'a']++;

            if(freq1 == freq2)
                return true;
        }

        return false;
    }
};
