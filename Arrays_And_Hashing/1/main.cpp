#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int index {};
        std::unordered_map<int, int> hash_map {};

        for (auto num : nums)
            hash_map[num] = index++;

        index = 0;

        for (int num : nums) {
            if (hash_map.find(target-num) != hash_map.end() && index != hash_map[target-num])
                return {index, hash_map[target-num]};
            index++;
        }
        return {};
    }
};
