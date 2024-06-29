#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set <int> hash_set {};
        for(auto num : nums) {
            if (hash_set.find(num) != hash_set.end())
                return true;
            hash_set.insert(num);
        }
        return false;
    }
};
