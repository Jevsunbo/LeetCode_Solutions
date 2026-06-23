class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
// turn each element of the array into anagrams versions by sorting
// storing the anagram as a key and putting the words as the value
// just return the hashmap values
unordered_map<string, vector<string>> map;
    for(int i=0; i<strs.size(); i++){
        string key = strs[i];
        sort(key.begin(), key.end());
        map[key].push_back(strs[i]);
    }
vector<vector<string>> result;
    for(auto& key : map){
        result.push_back(key.second);
    }
    return result;
    }
};