class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int size = nums.size();
        int count = 0;
        int i = 0;
        int j = 0;

        while (j < size) {

            if (nums[j] == 0)
                k--;

            while (k < 0) {
                if (nums[i] == 0)
                    k++;
                i++;
            }

            count = max(count, j - i + 1);
            j++;
        }

        return count;
    }
};