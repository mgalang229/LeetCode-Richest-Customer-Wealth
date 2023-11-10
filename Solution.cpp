class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int best = 0, sum = 0;
        for (int i = 0; i < (int) accounts.size(); i++) {
            sum = 0;
            for (int j = 0; j < (int) accounts[i].size(); j++) {
                sum += accounts[i][j];
            }
            best = max(best, sum);
        }
        return best;
    }
};
