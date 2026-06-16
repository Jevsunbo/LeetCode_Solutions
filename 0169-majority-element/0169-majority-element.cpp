class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> seen;

        for(int i=0;i<nums.size();i++){
            seen[nums[i]]++;
            if(seen[nums[i]] > (nums.size()/2)){
                return nums[i];
            }
        }
        return 0;
    }
};