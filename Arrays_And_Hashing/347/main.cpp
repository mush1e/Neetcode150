#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map <int, int> hash_map;
        std::vector<std::pair<int, int>> sorted_list;
        std::vector <int> solution {};

        for (const int& num : nums)
            hash_map[num]++;

        sorted_list.assign(hash_map.begin(), hash_map.end());

        std::sort(sorted_list.begin(), sorted_list.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
            return a.second > b.second;
        });

        for (size_t i = 0; i < k; i++)
            solution.push_back(sorted_list[i].first);

        return solution;

    }
};
