class Solution {
public:
    int maxrob(vector<int>& nums, int n, int idx, vector<int>& dp)
    {
        if(idx>=n)
        return 0;
        if(dp[idx]!=-1)
        return dp[idx];
        int robthathouse = nums[idx] + maxrob(nums,n,idx+2,dp);
        int skipthathouse = maxrob(nums,n,idx+1,dp);
        int maxprofit = 0;
        maxprofit = max(robthathouse, skipthathouse);
        return dp[idx] = maxprofit; 
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
        return maxrob(nums,n,0,dp);
    }
};
