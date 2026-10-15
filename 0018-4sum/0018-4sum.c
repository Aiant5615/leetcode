static int cmp(const void* a, const void* b) {
    int x = *(const int*)a, y = *(const int*)b;
    return (x > y) - (x < y);
}

int** fourSum(int* nums, int numsSize, int target, int* returnSize, int** returnColumnSizes) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int capacity = 64;
    int** result = malloc(sizeof(int*) * capacity);
    *returnSize = 0;
    for (int a = 0; a < numsSize - 3; a++) {
        if (a > 0 && nums[a] == nums[a - 1]) continue;
        for (int b = a + 1; b < numsSize - 2; b++) {
            if (b > a + 1 && nums[b] == nums[b - 1]) continue;
            int left = b + 1, right = numsSize - 1;
            while (left < right) {
                long long total = (long long)nums[a] + nums[b] + nums[left] + nums[right];
                if (total < target) left++;
                else if (total > target) right--;
                else {
                    if (*returnSize == capacity) { capacity *= 2; result = realloc(result, sizeof(int*) * capacity); }
                    int* q = malloc(sizeof(int) * 4);
                    q[0] = nums[a]; q[1] = nums[b]; q[2] = nums[left]; q[3] = nums[right];
                    result[(*returnSize)++] = q;
                    left++;
                    while (left < right && nums[left] == nums[left - 1]) left++;
                    right--;
                }
            }
        }
    }
    *returnColumnSizes = malloc(sizeof(int) * (*returnSize > 0 ? *returnSize : 1));
    for (int i = 0; i < *returnSize; i++) (*returnColumnSizes)[i] = 4;
    return result;
}
