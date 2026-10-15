static int lowerBound(int* nums, int n, long long x) {
    int lo = 0, hi = n;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if (nums[mid] < x) lo = mid + 1;
        else hi = mid;
    }
    return lo;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* result = malloc(sizeof(int) * 2);
    *returnSize = 2;
    int start = lowerBound(nums, numsSize, target);
    if (start == numsSize || nums[start] != target) { result[0] = result[1] = -1; return result; }
    result[0] = start;
    result[1] = lowerBound(nums, numsSize, (long long)target + 1) - 1;
    return result;
}
