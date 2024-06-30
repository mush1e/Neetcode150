#include <string>
#include <algorithm>

class Solution {
public:
    bool isPalindrome(std::string s) {

        std::transform(s.begin(), s.end(), s.begin(),
                       [](unsigned char c){ return std::tolower(c); });

        std::string filtered;

        for (char c : s)
            if (std::isalnum(c))
                filtered += std::tolower(c);

        s = filtered;

        for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
            if (s[i] != s[j])
                return false;
        }
        return true;
    }
};
