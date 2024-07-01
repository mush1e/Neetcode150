#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stk;
        for (const char& ch : s) {
            switch(ch) {

                case '(':
                case '{':
                case '[':
                    stk.push(ch);
                    break;

                case ')':
                    if (stk.empty() || stk.top() != '(')
                        return false;
                    stk.pop();
                    break;

                case '}':
                    if (stk.empty() || stk.top() != '{')
                        return false;
                    stk.pop();
                    break;

                case ']':
                    if (stk.empty() || stk.top() != '[')
                        return false;
                    stk.pop();
                    break;
            }
        }

        if(!stk.empty())
            return false;

        return true;
    }
};
