class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(), column=matrix[0].size();
        int low=0,high=(row*column)-1;
        while(low<=high){
            int mid = ((high-low)/2)+low;
            int curr = matrix[mid/column][mid%column];
            if(curr==target) return true;
            else if(curr<target) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};
