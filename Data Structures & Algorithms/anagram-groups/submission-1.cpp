class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        
        for (string s : strs) {
            // Create key by sorting characters
            string key = s;
            sort(key.begin(), key.end());
            
            // Group by sorted key
            mp[key].push_back(s);
        }
        
        // Convert map values to result
        vector<vector<string>> result;
        for (auto& p : mp) {
            result.push_back(p.second);
        }
        return result;
    }
};
