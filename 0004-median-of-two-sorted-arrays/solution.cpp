class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Ensure that nums1 is the smaller array
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int x = nums1.size();
        int y = nums2.size();
        int low = 0;
        int high = x;

        while (low <= high) {
            // Partition point for nums1
            int partitionX = (low + high) / 2;
            // Partition point for nums2
            int partitionY = (x + y + 1) / 2 - partitionX;

            // Calculate values at the partition points
            int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
            int minRightX = (partitionX == x) ? INT_MAX : nums1[partitionX];

            int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
            int minRightY = (partitionY == y) ? INT_MAX : nums2[partitionY];

            // Check if the partition is correct
            if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
                // Calculate the median
                if ((x + y) % 2 == 0) {
                    return (static_cast<double>(max(maxLeftX, maxLeftY)) + min(minRightX, minRightY)) / 2;
                } else {
                    return static_cast<double>(max(maxLeftX, maxLeftY));
                }
            } else if (maxLeftX > minRightY) {
                high = partitionX - 1;
            } else {
                low = partitionX + 1;
            }
        }

        // If the function hasn't returned a value, it means that the input arrays are not sorted
        throw runtime_error("Input arrays are not sorted");
    }
};
