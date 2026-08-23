class Solution {
public:
    int findMin(vector<int> &nums) {
        int low=0,high=nums.size()-1;
        while(low<high){
            int mid=((high-low)/2)+low;
            if(nums[mid]>nums[high]){
                low=mid+1;
            }
            else if(nums[mid]<nums[high]){
                high=mid;
            }
        }
        return nums[low]; 
    }
};
