// https://leetcode.com/problems/burst-balloons

class Solution {
public:
    int dp[501][501];
    int solve(vector<int>& nums,int i,int j)
    {
        if(i==j+1)
            return 0;
        else if(dp[i][j]==-1)
        {
            int ans = 0;
            for(int k = i+1;k<j;k++)
            {
                ans = max(ans,solve(nums,i,k)+solve(nums,k,j)+nums[i]*nums[k]*nums[j]);
            }
            dp[i][j] = ans;
        }
        return dp[i][j];
    }
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.end(),1);
        nums.push_back(1);
        memset(dp,-1,sizeof(dp));
        return solve(nums,0,nums.size()-1);
    }
};