class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
    unordered_set<int> set;

    for(int c : nums){
        if(set.count(c)){
            return true;
        }
        set.insert(c);
    }
    return false;
    }
};