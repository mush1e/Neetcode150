#include <vector>
#include <stack>

class Solution {
public:
    int carFleet(int target, std::vector<int>& position, std::vector<int>& speed) {
        std::stack<double> stk;
        std::vector<std::pair<int, int>> cars;

        for (int i = 0; i < speed.size(); i++)
            cars.push_back({position[i], speed[i]});

        std::sort(cars.begin(), cars.end(), [](std::pair<int, int> a, std::pair<int, int>b) {
            return a.first > b.first;
        });

        for (int i = 0; i < cars.size(); i++) {
            double time = (double)(target - cars[i].first) / (double)cars[i].second;
            if (!stk.empty() && stk.top() >= time)
                continue;
            stk.push(time);
        }

        return stk.size();
    }
};
