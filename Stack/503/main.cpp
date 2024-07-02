#include <vector>
#include <stack>

class Solution {
public:
    std::vector<int> nextGreaterElements(std::vector<int>& nums) {
        std::vector<int> solution(nums);
        std::stack<int> stk;
        for (int i = 2*nums.size()-1; i >= 0 ; i--) {
            while(!stk.empty() && stk.top() <= nums[i % nums.size()])
                stk.pop();
            if(stk.empty())
                solution[i%nums.size()] = -1;
            else
                solution[i%nums.size()] = stk.top();
            stk.push(nums[i%nums.size()]);
        }
        return solution;
    }
};
