double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    if (nums1Size > nums2Size) return findMedianSortedArrays(nums2, nums2Size, nums1, nums1Size);
    int m = nums1Size, n = nums2Size;
    int half = (m + n + 1) / 2;
    int lo = 0, hi = m;
    while (lo <= hi) {
        int i = (lo + hi) / 2, j = half - i;
        int aLeft = i > 0 ? nums1[i - 1] : INT_MIN;
        int aRight = i < m ? nums1[i] : INT_MAX;
        int bLeft = j > 0 ? nums2[j - 1] : INT_MIN;
        int bRight = j < n ? nums2[j] : INT_MAX;
        if (aLeft <= bRight && bLeft <= aRight) {
            int left = aLeft > bLeft ? aLeft : bLeft;
            int right = aRight < bRight ? aRight : bRight;
            if ((m + n) % 2) return left;
            return (left + right) / 2.0;
        }
        if (aLeft > bRight) hi = i - 1;
        else lo = i + 1;
    }
    return 0.0;
}
