class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Step 1: Always binary search on the SMALLER array.
        // This keeps our search space small and avoids negative indices later.
        if (nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);

        int m = nums1.size();
        int n = nums2.size();

        int low = 0, high = m;   // We will binary search "how many from nums1 go left"

        while (low <= high) {
            // Step 2: Guess a partition point in nums1
            int cut1 = (low + high) / 2;

            // Step 3: The partition in nums2 is forced.
            // Total left elements must be (m+n+1)/2 (handles odd/even both).
            int cut2 = (m + n + 1) / 2 - cut1;

            // Step 4: Find the 4 boundary elements around the cuts.
            // If a cut is at the very start/end, use -infinity / +infinity
            // so comparisons still work correctly.
            int left1  = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1];
            int left2  = (cut2 == 0) ? INT_MIN : nums2[cut2 - 1];
            int right1 = (cut1 == m) ? INT_MAX : nums1[cut1];
            int right2 = (cut2 == n) ? INT_MAX : nums2[cut2];

            // Step 5: Check if this partition is valid.
            if (left1 <= right2 && left2 <= right1) {
                // Correct partition found!
                if ((m + n) % 2 == 0) {
                    // Even total: median = avg of two middle elements
                    return (max(left1, left2) + min(right1, right2)) / 2.0;
                } else {
                    // Odd total: median = the larger of the two left-boundary elements
                    return max(left1, left2);
                }
            }
            else if (left1 > right2) {
                // Step 6a: Too many elements from nums1 on the left. Move cut1 left.
                high = cut1 - 1;
            }
            else {
                // Step 6b: Too few elements from nums1 on the left. Move cut1 right.
                low = cut1 + 1;
            }
        }

        return 0.0; // Should never reach here if inputs are valid sorted arrays
    }
};
