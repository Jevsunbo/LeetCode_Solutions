class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//         # Approach:
// # - Check if we've already seen that complement in our map
// # - If yes → we found our pair, return both indices
// # - If no → store current number and its index in the map, move on
        unordered_map<int, int> seen;
        vector<int> indicies;
        for(int i = 0; i < nums.size(); i++){
// # - For each number, calculate what we NEED (complement = target - num)
            int complement = target - nums[i];

            if(seen.count(complement)){
                return {seen[complement], i};
            }

            seen[nums[i]] = i;
        }
        return {};
    }
};