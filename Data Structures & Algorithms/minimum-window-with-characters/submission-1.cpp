class Solution {
public:
    string minWindow(string s, string t) {
        int size = s.size();
        int i = 0;
        int j = 0;
        int count = INT_MAX;
        int tempcount = INT_MAX;
        int besti = 0;
        int bestj = 0;

        string ss(s.begin(), s.end());

        map<char, int> mpp;
        for (int i = 0; i < t.size(); i++) {
            mpp[t[i]]++;
        }

        while (j < size) {
            int flag = 1;

            if (mpp.find(s[j]) != mpp.end()) {
                mpp[s[j]]--;
            }

            for (auto it : mpp) {
                if (it.second > 0) {
                    flag = 0;
                }
            }

            if (flag == 0) {
                j++;
            }

            if (flag == 1) {
                tempcount = j - i + 1;

                if (tempcount < count) {
                    besti = i;
                    bestj = j;
                    count = tempcount;
                }

                while (flag == 1) {
                    if (tempcount < count) {
                        besti = i;
                        bestj = j;
                        count = tempcount;
                    }

                    if (mpp.find(s[i]) != mpp.end()) {
                        mpp[s[i]]++;
                    }

                    i++;

                    flag = 1;

                    for (auto it : mpp) {
                        if (it.second > 0) {
                            flag = 0;
                        }
                    }

                    tempcount = j - i + 1;
                }

                j++;
            }
        }

        if (count == INT_MAX) {
            return "";
        }

        return ss.substr(besti, bestj - besti + 1);
    }
};
