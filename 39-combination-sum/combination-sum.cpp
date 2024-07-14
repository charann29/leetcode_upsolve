#include <vector>
#include <algorithm>

class Solution {
public:
    void backtrack(std::vector<int>& candidates, int target, std::vector<int>& combination, std::vector<std::vector<int>>& result, int start) {
        if (target == 0) {
            result.push_back(combination);
            return;
        }
        if (target < 0) {
            return;
        }
        for (int i = start; i < candidates.size(); ++i) {
            combination.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], combination, result, i);
            combination.pop_back();
        }
    }

    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
        std::vector<std::vector<int>> result;
        std::vector<int> combination;
        std::sort(candidates.begin(), candidates.end());
        backtrack(candidates, target, combination, result, 0);
        return result;
    }
};
