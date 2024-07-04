#include <vector>

class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        int hgt = matrix.size();
        int wdt = matrix[0].size();
        int h;
        bool found {};

        for (int i = 0, j = matrix.size() - 1; i <= j; ) {
            int mid = (i + j) / 2;
            if (target > matrix[mid][matrix[0].size()-1])
                i = mid + 1;
            else if (target < matrix[mid][0])
                j = mid - 1;
            else {
                h = mid;
                found = true;
                break;
            }
        }
        if (!found)
            return false;
        found = false;
        for (int i = 0, j = matrix[h].size(); i <= j; ) {
            int mid = (i + j)/2;

            if (target > matrix[h][mid])
                i = mid + 1;
            else if (target < matrix[h][mid])
                j = mid - 1;
            else
                return true;
        }

        return false;

    }
};
