#include <vector>

class Solution {
public:
    int trap(std::vector<int>& height) {
        int volume = 0;
        int max_left = 0;
        int max_right = 0;
        std::vector<int> left_heights(height.size());
        std::vector<int> right_heights(height.size());

        left_heights[0] = height[0];
        right_heights[height.size()-1] = height[height.size()-1];

        for (int i = 1; i < height.size(); i++) {
            left_heights[i] = max_left < height[i-1] ? height[i-1] : max_left;
            max_left = left_heights[i];
        }

        for (int i = height.size()-2; i >= 0; i--) {
            right_heights[i] = max_right < height[i+1] ? height[i+1] : max_right;
            max_right = right_heights[i];
        }

        for (int i = 0; i < height.size(); i++) {
            int h = right_heights[i] > left_heights[i] ? left_heights[i] : right_heights[i];
            volume += h-height[i] > 0 ? h - height[i] : 0;
        }
        return volume;

    }
};
