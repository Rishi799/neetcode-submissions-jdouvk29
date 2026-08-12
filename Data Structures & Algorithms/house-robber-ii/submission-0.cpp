class Solution {
public:
    int solve(vector<int>& nums, int index, vector<int>& dp) {
        if (index < 0) return 0;
        if (dp[index] != -1) return dp[index];

        dp[index] = max(nums[index] + solve(nums, index - 2, dp), 
                        solve(nums, index - 1, dp));
        return dp[index];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];

        vector<int> temp1, temp2;
        for (int i = 0; i < n; i++) {
            if (i != 0) temp1.push_back(nums[i]);     
            if (i != n - 1) temp2.push_back(nums[i]); 
        }

        int sub_size = temp1.size(); 
        
        vector<int> dp1(sub_size, -1);
        vector<int> dp2(sub_size, -1);

        return max(solve(temp1, sub_size - 1, dp1), 
                   solve(temp2, sub_size - 1, dp2));
    }
};