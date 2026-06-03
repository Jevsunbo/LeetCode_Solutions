class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        unordered_map<int, int> seen;

        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];

            if(seen.count(complement)){
                indices.push_back(seen[complement]);
                indices.push_back(i);
                return indices;
            }

            seen[nums[i]] = i;
        };

        return indices;
    }
};