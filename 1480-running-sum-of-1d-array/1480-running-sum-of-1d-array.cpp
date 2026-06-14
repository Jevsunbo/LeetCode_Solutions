class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> running_sum(nums.size(), 0);
        running_sum[0] = nums[0];
        for(int i=1; i<nums.size();i++){
            running_sum[i] = running_sum[i-1] + nums[i];
        }
        return running_sum;
    }
};