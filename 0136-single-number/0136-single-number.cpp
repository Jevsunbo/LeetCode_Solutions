class Solution {
public:
    int singleNumber(vector<int>& nums) {
       // find the element that appears only once, every other element appears twice.
       unordered_set<int> seen;
       for (int n: nums){ 
        if(seen.count(n)){
         seen.erase(n);}

        else{
         seen.insert(n);}
       }
       return *seen.begin();
    }
};