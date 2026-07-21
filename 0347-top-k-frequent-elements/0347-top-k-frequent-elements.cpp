class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // create a frequency map for for the numbers in the array
        // find the two most frequent elements and return it as a vector

        unordered_map<int, int> freq;
        for(int num: nums){
            freq[num]++;
        }
        // Read in the pairs (freq, numbers) into a vector
        vector<pair<int, int>> pairs;
        for(auto& [num, count]: freq){
            pairs.push_back({count, num});
        }

        // sort by freqency since the pairs sort by the first element 
        sort(pairs.begin(), pairs.end());
        reverse(pairs.begin(), pairs.end());

        //grab the first k elements in the vector
        vector<int> result;
        for(int i =0; i < k; i++){
            result.push_back(pairs[i].second);
        }
        return result;
    }
};