class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]=true;
        }
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            if(mp.find(nums[i])!=mp.end()){
                if(mp.find(nums[i]-1)!=mp.end()){
                    continue;
                }
                int currVal=nums[i];
                int curr=0;
                while(mp.find(currVal)!=mp.end()){
                    curr++;
                    currVal++;
                }
                ans=max(ans,curr);
            }
        }
        return ans;
    }
};
