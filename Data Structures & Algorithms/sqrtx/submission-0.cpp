class Solution {
public:
    int mySqrt(int z) {
        double x = z;
        double y = 1;
        double e = 0.000001;   

        while (abs(x - y) > e) {
         x = (x + y) / 2;
         y = z / x;
        }
        return  x;
        
    }
};