class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = (int)(nums.size()-1);
        int pos = (int)(nums.size()-1);

        vector<int> result(nums.size(), 0);

        while(left <= right){
            int leftsq = nums[left] * nums[left];
            int rightsq = nums[right] * nums[right];

            if(leftsq>rightsq){
                result[pos] = leftsq;
                left++;
            }
            else{
                result[pos] = rightsq;
                right--;
            }
            pos--;
        }
        return result;
    }
};