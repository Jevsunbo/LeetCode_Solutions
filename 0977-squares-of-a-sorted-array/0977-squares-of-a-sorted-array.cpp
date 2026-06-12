class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares(nums.size(), 0);
        // square the original array and create a new, squared array
        for(int i =0; i<nums.size(); i++){
            squares[i] = pow(nums[i], 2);
        }
        // sort the new array
        for(int i = 0; i<nums.size()-1; i++){
            for(int j = i+1; j<nums.size(); j++){
                int temp = 0;
                if(squares[i]>squares[j]){
                    temp = squares[j];
                    squares[j] = squares[i];
                    squares[i]=temp;}
            }
        }
        return squares;
    }
};