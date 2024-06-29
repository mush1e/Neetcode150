#include <vector>
#include <string>
#include <unordered_map>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::string temp {};
        std::vector<std::vector<std::string>> solution {};
        std::unordered_map<std::string, std::vector<std::string>> hash_map {};

        for (const std::string& str : strs) {
            temp = str;
            std::sort(temp.begin(), temp.end());
            hash_map[temp].push_back(str);
        }

        for (const auto& it : hash_map)
            solution.push_back(it.second);

        return solution;
    }
};
