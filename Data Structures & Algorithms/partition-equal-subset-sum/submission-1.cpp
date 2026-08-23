class Solution {
public:
    unordered_set<int> dp;
    // bool solve(vector<int>& nums, int i, int remaining){
    //     if(remaining==0) return true;
    //     if(i>=nums.size() || remaining < 0) return false;
    //     if(dp.find(i)!=dp.end()) return dp[i];
    //     else dp[i]=solve(nums,i+1,remaining-nums[i]) || solve(nums,i+1,remaining);
    //     return dp[i];
    // }
    bool canPartition(vector<int>& nums) {
        int total=0;
        for(int i=0; i<nums.size(); i++){
            total+=nums[i];
        }
        if(total%2!=0) return false;
        int target = total/2;
        dp.insert(0);
        for(int i=nums.size()-1; i>=0; i--){
            unordered_set<int> next = dp;
            for(auto it:dp){
                if(it+nums[i]==target) return true;
                if(it+nums[i]<target) next.insert(it+nums[i]);
            }
            dp=next;
        }
        return false;
    }
};
