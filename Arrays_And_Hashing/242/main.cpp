#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::unordered_map <char, int> hash_map {};

         if (s.size() != t.size())
            return false;

        for (auto ch : s)
            hash_map[ch] ++;

        for (auto ch : t)
            hash_map[ch] --;

        for (auto it : hash_map)
            if (it.second != 0)
                return false;

        return true;
    }
};
