class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        int l=0, r=height.size()-1;
        int leftMax=height[l], rightMax=height[r];
        while(l<r){
            leftMax=max(height[l],leftMax);
            rightMax=max(height[r],rightMax);
            if(leftMax<rightMax){
                ans+=leftMax-height[l];
                l++;
            }
            else{
                ans+=rightMax-height[r];
                r--;
            }
        }
        return ans;
    }
};
