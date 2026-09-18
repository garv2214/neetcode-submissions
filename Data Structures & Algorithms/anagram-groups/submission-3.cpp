class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> groups;
        
        for (const std::string& str : strs) {
            std::string key = str;
            std::sort(key.begin(), key.end());
            groups[key].push_back(str);
        }
        
        std::vector<std::vector<std::string>> result;
        for (const auto& pair : groups) {
            result.push_back(pair.second);
        }
        return result;
    }
};