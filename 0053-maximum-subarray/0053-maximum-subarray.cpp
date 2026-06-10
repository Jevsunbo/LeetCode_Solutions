class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Time complexity:  O(n) — single pass
        // Space complexity: O(1) — only two variables
        int currentSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};