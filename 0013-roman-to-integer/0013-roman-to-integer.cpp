class Solution {
public:
    int romanToInt(string s) {
// roman numeral values
        unordered_map<char, int> val{
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        // s = "MCMXCIV"
        // i = 6; curr = 5; next = ; total = 1994;
        int total = 0;
// cur
        for(int i=0; i<s.size(); i++){
            int curr = val[s[i]];
            int next = 0;
// next 
            if(i < s.size()-1){next = val[s[i+1]];}
            else{ next = 0;}
// total 
            if(curr < next){total -= curr;}
            else{total += curr;}
        }
    return total;
    }
};