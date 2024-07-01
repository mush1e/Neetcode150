#include <stack>
#include <utility>

class MinStack {
    int min_val = INT_MAX;
    std::stack<std::pair<int, int>> stk;
public:
    MinStack() {

    }

    void push(int val) {

        if (!stk.empty())
            min_val = stk.top().second;
        else
            min_val = val;

        min_val = min_val > val ? val : min_val;

        stk.push({val, min_val});
    }

    void pop() {
        stk.pop();
    }

    int top() {
        return stk.top().first;
    }

    int getMin() {
        return stk.top().second;
    }
};
