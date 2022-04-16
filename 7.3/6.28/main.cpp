#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    static void dfs(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& combine, int idx) {
        if (idx == candidates.size()) {
            return;
        }
        if (target == 0) {
            ans.emplace_back(combine);
            return;
        }
        // 直接跳过
        dfs(candidates, target, ans, combine, idx + 1);
        // 选择当前数
        if (target - candidates[idx] >= 0) {
            combine.emplace_back(candidates[idx]);
            dfs(candidates, target - candidates[idx], ans, combine, idx);
            combine.pop_back();
        }
    }

    static vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combine;
        dfs(candidates, target, ans, combine, 0);
        return ans;
    }
};
int main()
{
    vector<vector<int>> ans;
    vector<int> candidates = { 2,3,5 };
    int target = 8;

    ans=Solution::combinationSum(candidates, target);
    for (auto i : ans)
    {
        for (int j : i)
        {
            std::cout << j << " "  ;
        }
        std::cout <<' ' << std::endl;
    }
        
}
