#include <vector>
#include <map>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::map <int, int> hash_map {};
        for(auto num : nums) {
            if (hash_map.find(num) != hash_map.end())
                return true;
            hash_map[num]++;
        }
        return false;
    }
};
