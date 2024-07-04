#include <vector>
#include <stack>

class Solution {
public:
    int largestRectangleArea(std::vector<int>& heights) {
        std::vector<int> left_short(heights), right_short(heights);
        std::stack<int> stk;
        int area, max_area = 0;
        // find index to the right of current index shorter
        for (int i = 0; i < heights.size(); i++) {
            while(!stk.empty() && heights[stk.top()] > heights[i]) {
                right_short[stk.top()] = i;
                stk.pop();
            }
            stk.push(i);
        }
        // replace indices with no smaller right with -1
        while(!stk.empty()) {
           right_short[stk.top()] = heights.size();
            stk.pop();
        }

        // find index to the left of current index shorter
        for (int i = heights.size()-1; i >= 0; i--) {
            while(!stk.empty() && heights[stk.top()] > heights[i]) {
                left_short[stk.top()] = i;
                stk.pop();
            }
            stk.push(i);
        }
        // replace indices with no smaller right with -1
        while(!stk.empty()) {
           left_short[stk.top()] = -1;
            stk.pop();
        }

        // finding largest area from left -> right
        for (int i = 0; i < heights.size(); i++) {
            area = heights[i] * (right_short[i] - left_short[i]-1);
            max_area = area > max_area ? area : max_area;
        }

        return max_area;
    }
};
