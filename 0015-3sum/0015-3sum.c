static int cmp(const void* a, const void* b) { return *(const int*)a - *(const int*)b; }

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int capacity = 64;
    int** result = malloc(sizeof(int*) * capacity);
    *returnSize = 0;
    for (int i = 0; i < numsSize - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int left = i + 1, right = numsSize - 1;
        while (left < right) {
            int total = nums[i] + nums[left] + nums[right];
            if (total < 0) left++;
            else if (total > 0) right--;
            else {
                if (*returnSize == capacity) { capacity *= 2; result = realloc(result, sizeof(int*) * capacity); }
                int* t = malloc(sizeof(int) * 3);
                t[0] = nums[i]; t[1] = nums[left]; t[2] = nums[right];
                result[(*returnSize)++] = t;
                left++;
                while (left < right && nums[left] == nums[left - 1]) left++;
                right--;
            }
        }
    }
    *returnColumnSizes = malloc(sizeof(int) * (*returnSize > 0 ? *returnSize : 1));
    for (int i = 0; i < *returnSize; i++) (*returnColumnSizes)[i] = 3;
    return result;
}
