#include <stack>
#include <vector>

class Solution {
public:
    int evalRPN(std::vector<std::string>& tokens) {
        int op1 = 0  , op2 = 0;
        std::stack<int> stk;

        for (auto token : tokens) {
            if (isdigit(token[0]) || (token.size() > 1 && isdigit(token[1])))
                stk.push(stoi(token));
            else {
                op1 = stk.top();
                stk.pop();
                op2 = stk.top();
                stk.pop();
                switch(token[0]) {
                    case '+':
                        stk.push(op2+op1);
                        break;

                    case '*':
                        stk.push(op2*op1);
                        break;

                    case '-':
                        stk.push(op2-op1);
                        break;

                    case '/':
                        stk.push(op2/op1);
                        break;
                }
            }
        }
        return stk.top();
    }
};
