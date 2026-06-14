class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0, right = 0;
        vector<int> prefix(nums.size(), 0);
        prefix[0] = nums[0];
        for(int i =1; i<nums.size(); i++){
            prefix[i] = prefix[i-1] + nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            if(i == 0){
                left = 0;
                right = prefix[nums.size()-1] - prefix[0];
                if(right == left){ return 0;}
                continue;
            }
            left = prefix[i-1];
            right = prefix[nums.size()-1] - prefix[i];
            if(left == right){
                return i;}
            }
            return -1;
    }
};