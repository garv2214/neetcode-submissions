class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for (string word : strs)
        {
            vector<int> count(26,0);
            for (char c : word)
            {
                count [c-'a']++; 
            }
            string key;
            for (int frequency : count)
            {
                key += "#" + to_string(frequency);
            }
            groups[key].push_back(word);
        }
        vector<vector<string>> result;
        for (auto& entry : groups)
        {
            result.push_back(entry.second);
        }
        return result;
    }
};
