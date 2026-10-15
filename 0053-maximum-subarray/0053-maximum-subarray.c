int maxSubArray(int* nums, int numsSize) {
    int best = nums[0], current = nums[0];
    for (int i = 1; i < numsSize; i++) {
        current = current + nums[i] > nums[i] ? current + nums[i] : nums[i];
        if (current > best) best = current;
    }
    return best;
}
