class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp = 0;
        for(int i = 0; i<nums.size(); i++){
            for(int j = 0; j < nums.size()-1; j++){
                if(nums[j] == 0){
                int temp = nums[j+1];
                nums[j] = temp;
                nums[j+1] = 0;}
            }
        }
    }
};