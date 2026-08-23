class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans=0;
        int l=0, r=heights.size()-1;
        while(l<r){
            int curr = min(heights[l],heights[r])*(r-l);
            if(heights[l]<heights[r]) l++;
            else r--;
            ans=max(ans,curr);
        }
        return ans;
    }
};
