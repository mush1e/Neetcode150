#include <vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        for (int i = 0, j = nums.size()-1; i <= j; ) {
            int mid = (i + j) / 2;
            if (nums[mid] > target)
                j = mid - 1;
            else if (nums[mid] < target)
                i = mid + 1;
            else
                return mid;
        }
        return -1;

    }
};
