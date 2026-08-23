class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros=0;
        int product=1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0) zeros++;
            else product*=nums[i];
        }
        if(zeros>1) return vector<int>(nums.size(),0);
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            if(zeros>0 && nums[i]!=0) res.push_back(0);
            else if(nums[i]==0) res.push_back(product);
            else res.push_back(product/nums[i]);
        }
        return res;
    }
};
