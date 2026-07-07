class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> word;
            for(char c: magazine){
                word[c]++;
            }
            for(char b: ransomNote){
                if(word[b] == 0){
                    return false;}
                word[b]--;
            }
        return true;
        }
};