#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        std::vector<int> left_product (nums.size());
        std::vector<int> right_product (nums.size());
        std::vector<int> solution (nums.size());

        left_product[0] = 1;
        right_product[nums.size()-1] = 1;

        for (size_t i = 1; i < nums.size(); i++)
            left_product[i] = nums[i-1] * left_product[i-1];

        for (size_t i = nums.size()-2; i < nums.size(); i--)
            right_product[i] = nums[i+1] * right_product[i+1];

        for (size_t i = 0; i < nums.size(); i++)
            solution[i] = left_product[i] * right_product[i];

        return solution;
    }
};
