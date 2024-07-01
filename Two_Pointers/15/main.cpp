#include <vector>
#include <set>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> solution;
        std::set<std::vector<int>> hash_set;

        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {

            for (int j = i + 1, k = nums.size()-1; j < k; ) {

                if(nums[j] + nums[k] + nums[i] == 0)
                    hash_set.insert({nums[i], nums[j++], nums[k--]});
                else
                    nums[j] + nums[k] + nums[i] > 0 ? k-- : j++;
            }
        }

        for (const auto& vec : hash_set)
            solution.push_back(vec);


        return solution;
    }
};
