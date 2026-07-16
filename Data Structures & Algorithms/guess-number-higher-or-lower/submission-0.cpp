/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l=1;
        int r=n;
        int flag=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            int temp=guess(mid);
            if(temp==-1){
                r=mid-1;
            }
            else if(temp==1){
                l=mid+1;
            }
            else if(temp==0){
                flag=mid;
                break;
            }

        }
        return flag;

        
    }
};