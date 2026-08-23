class Solution {
public:
    bool canEat(vector<int>& piles, int h, int k){
        int curr=0;
        for(int i=0; i<piles.size(); i++){
            curr+=ceil((double)piles[i]/k);
        }
        return curr<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int low=1, high=piles[piles.size()-1];
        int ans;
        while(low<=high){
            int mid=((high-low)/2)+low;
            bool can = canEat(piles,h,mid);
            if(can){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};
