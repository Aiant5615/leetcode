class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) return findMedianSortedArrays(nums2, nums1);
        int m = nums1.size(), n = nums2.size();
        int half = (m + n + 1) / 2;
        int lo = 0, hi = m;
        while (lo <= hi) {
            int i = (lo + hi) / 2, j = half - i;
            int aLeft = i > 0 ? nums1[i - 1] : INT_MIN;
            int aRight = i < m ? nums1[i] : INT_MAX;
            int bLeft = j > 0 ? nums2[j - 1] : INT_MIN;
            int bRight = j < n ? nums2[j] : INT_MAX;
            if (aLeft <= bRight && bLeft <= aRight) {
                if ((m + n) % 2) return max(aLeft, bLeft);
                return (max(aLeft, bLeft) + min(aRight, bRight)) / 2.0;
            }
            if (aLeft > bRight) hi = i - 1;
            else lo = i + 1;
        }
        return 0.0;
    }
};
