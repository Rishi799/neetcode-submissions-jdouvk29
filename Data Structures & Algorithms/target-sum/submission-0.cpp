class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {

        int sum = 0;
        int n = nums.size();

        for (int x : nums)
            sum += x;


        if (abs(target) > sum) return 0;
        if ((target + sum) % 2 != 0) return 0;

        int asum = (target + sum) / 2;

        vector<vector<int>> t(n + 1, vector<int>(asum + 1, 0));
        t[0][0]=1;


        for (int i = 0; i <= n; i++)
            t[i][0] = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= asum; j++) {

                if (nums[i - 1] <= j)
                    t[i][j] = t[i - 1][j] + t[i - 1][j - nums[i - 1]];
                else
                    t[i][j] = t[i - 1][j];
            }
        }

        return t[n][asum];
    }
};