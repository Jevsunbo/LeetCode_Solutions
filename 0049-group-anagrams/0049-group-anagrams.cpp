class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ani;
        for(int i =0 ; i<strs.size(); i++){
            string ana = strs[i];
            sort(ana.begin(), ana.end());
            ani[ana].push_back(strs[i]);
        }

        vector<vector<string>> result;
        for(auto& answer: ani){
            result.push_back(answer.second);
        }
        return result;
    }
};