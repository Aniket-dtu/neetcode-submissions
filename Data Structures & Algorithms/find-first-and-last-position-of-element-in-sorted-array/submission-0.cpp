class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size();
        int l = 0;
        int r = size - 1;

        while (l <= r) {
            int mid = (l + r) / 2;

            if (nums[mid] == target) {

                int left = mid;
                int right = mid;

                while (left - 1 >= 0 && nums[left - 1] == target)
                    left--;

                while (right + 1 < size && nums[right + 1] == target)
                    right++;

                return {left, right};
            }
            else if (nums[mid] > target) {
                r = mid - 1;      // Fixed
            }
            else {
                l = mid + 1;      // Fixed
            }
        }

        return {-1, -1};
    }
};