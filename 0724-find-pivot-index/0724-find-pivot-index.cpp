class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // lets create the prefix sum
        vector<int> prefix(nums.size(), 0);
        int left = 0, right = 0;
        prefix[0] = nums[0];
        for(int i=1; i<nums.size(); i++){
            prefix[i] = prefix[i-1] + nums[i];};

        // check index 0 separately
        if (prefix[nums.size()-1] - prefix[0] == 0) return 0;

        // lets create the left and right sums logic
        for(int i=1; i<nums.size(); i++){
        left = prefix[i-1];
        right = prefix[nums.size()-1] - prefix[i];
        if(left == right){
            return i;}};

        return -1;




        // 1. restating the problem
        // given nums we have to find the index where the sum of all the numbers on the left of it are equal to the sum of all the numbers to the right of it. then return that index.
        // when the array is at index 0, set the left sum equal to 0.
        // when the array is at index[array.size()], set the right sum equal to 0 aswell.
        // if no index exists, return -1.

        // 2. clarifying questions
        // does the pivot element count in the left or right sums? no
        // can the array be empty? no
        // can there be negative numbers? yes

        // 3. walk through the example manually on paper
        // if we use a prefix array, at any index of i, the left sum will be the element directly to the left of i in the prefix array. the right sum will be the last element in the prefix array minus the ith element of the prefix array.

        // 4. state approach and complexity before coding it
        // i will be using a prefix sum to determine the pivot index and it will be O(n) because i am using a for loop looking at every element of the array.

        // 6. write brute force first to get something working

        // 7. trace through manually with your example before you run it

        // 7. optimize if you have time


        



    }
};