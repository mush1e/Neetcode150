#include <vector>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int max_area = 0;
        for (int i = 0, j = height.size()-1; i < j;) {
            int h = height[i] < height[j] ? height[i] : height[j];
            max_area = max_area < h * (j-i) ? h * (j-i) : max_area;
            height[i] < height[j] ? i++ : j--;
        }
        return max_area;
    }
};
