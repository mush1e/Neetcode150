#include <vector>
#include <unordered_set>

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        std::unordered_set<int> hash_set;
        int total = 0;
        int count = 0;

        for (const int& num : nums)
            hash_set.insert(num);

        for (const int& v : nums) {

            if (hash_set.find(v) == hash_set.end())
                continue;

            hash_set.erase(v);

            count = 1;
            int temp = v;

            while (hash_set.find(temp + 1) != hash_set.end()) {
                temp++;
                count++;
                hash_set.erase(temp);
            }

            temp = v;

            while (hash_set.find(temp - 1) != hash_set.end()) {
                temp--;
                count++;
                hash_set.erase(temp);
            }
            total = count > total ? count : total;
        }
        return total;
    }
};
