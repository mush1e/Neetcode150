#include <stack>
#include <vector>

class Solution {
public:
    std::vector<int> dailyTemperatures(std::vector<int>& temperatures) {
        std::vector<int> solution(temperatures.size());
        std::stack<int> stk;
        for (int i = 0 ; i < temperatures.size(); i++) {
            while(!stk.empty() && temperatures[i] > temperatures[stk.top()]) {
                solution[stk.top()] = i - stk.top();
                stk.pop();
            }
            stk.push(i);
        }
        return solution;
    }
};
