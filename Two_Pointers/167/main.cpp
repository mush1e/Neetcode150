#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        for (int i = 0, j = numbers.size() - 1; i < j;) {
            if (numbers[i] + numbers[j] == target)
                return {i+1, j+1};
            numbers[i] + numbers[j] > target ? j-- : i++;
        }
        return {0,0};
    }
};
