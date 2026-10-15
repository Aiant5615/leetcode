static int cmp(const void* a, const void* b) { return *(const int*)a - *(const int*)b; }

int threeSumClosest(int* nums, int numsSize, int target) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int best = nums[0] + nums[1] + nums[2];
    for (int i = 0; i < numsSize - 2; i++) {
        int left = i + 1, right = numsSize - 1;
        while (left < right) {
            int total = nums[i] + nums[left] + nums[right];
            if (abs(total - target) < abs(best - target)) best = total;
            if (total < target) left++;
            else if (total > target) right--;
            else return total;
        }
    }
    return best;
}
