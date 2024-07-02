#include <stack>
#include <vector>
#include <map>

class Solution {
public:
    std::vector<int> nextGreaterElement(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> solution;
        std::map<int, int> hash_map;
        std::stack<int> stk;

        for (int i = nums2.size()-1; i >= 0; i--) {
            while(!stk.empty() && stk.top() <= nums2[i])
                stk.pop();

            hash_map[nums2[i]] = stk.empty() ? -1 : stk.top();
            stk.push(nums2[i]);
        }

        for (int i = 0; i < nums1.size(); i++)
            solution.push_back(hash_map[nums1[i]]);

        return solution;
    }
};
