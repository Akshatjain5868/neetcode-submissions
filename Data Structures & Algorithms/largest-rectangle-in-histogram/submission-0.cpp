class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> st;
        int maxArea = INT_MIN;
        for(int i=0; i<heights.size(); i++){
            int lastPoped=i;
            while(!st.empty() && st.top().second > heights[i]){
                auto curr = st.top();
                int currArea = curr.second*(i-curr.first);
                maxArea = max(currArea,maxArea);
                lastPoped=curr.first;
                st.pop();
            }
            st.push({lastPoped,heights[i]});
        }
        while (!st.empty()) {
            auto [index, height] = st.top();
            st.pop();

            int width = heights.size() - index;
            maxArea = max(maxArea, height * width);
        }
        return maxArea;
    }
};
