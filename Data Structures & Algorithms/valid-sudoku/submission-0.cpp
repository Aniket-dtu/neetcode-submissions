class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& nums) {
        int row=9;
        int col=9;
        for(int i=0;i<row;i++){
            unordered_set<char>mpp;
            for(int j=0;j<col;j++){
                if(nums[i][j]=='.'){
                    continue;
                }
                if(mpp.find(nums[i][j])!=mpp.end()){
                    return false;
                }
                mpp.insert(nums[i][j]);
            }
        }
        for(int i=0;i<row;i++){
            unordered_set<char>mpp;
            for(int j=0;j<col;j++){
                if(nums[j][i]=='.'){
                    continue;
                }
                if(mpp.find(nums[j][i])!=mpp.end()){
                    return false;
                }
                mpp.insert(nums[j][i]);
            }
        }
        for(int sr=0;sr<9;sr+=3){
            int er=sr+3;
            for(int sc=0;sc<9;sc+=3 ){
                int ec=sc+3;
                unordered_set<char>mpp;
                for(int i=sr;i<er;i++){
                    for(int j=sc;j<ec;j++){
                        if(nums[i][j]=='.'){
                            continue;
                        }
                        if(mpp.find(nums[i][j])!=mpp.end()){
                            return false;
                        }
                        mpp.insert(nums[i][j]);
                    }
                    
                }
            }
        }
        return true;
        
    }
};