class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> result;
        for (int a = 0; a < n - 3; a++) {
            if (a > 0 && nums[a] == nums[a - 1]) continue;
            for (int b = a + 1; b < n - 2; b++) {
                if (b > a + 1 && nums[b] == nums[b - 1]) continue;
                int left = b + 1, right = n - 1;
                while (left < right) {
                    long long total = (long long)nums[a] + nums[b] + nums[left] + nums[right];
                    if (total < target) left++;
                    else if (total > target) right--;
                    else {
                        result.push_back({nums[a], nums[b], nums[left], nums[right]});
                        left++;
                        while (left < right && nums[left] == nums[left - 1]) left++;
                        right--;
                    }
                }
            }
        }
        return result;
    }
};
