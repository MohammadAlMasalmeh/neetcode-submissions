class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int maxH = 0;
        while(l < r){
            int curHeight = min(heights[l], heights[r]);
            int cur = curHeight * (r-l);
            if(heights[l] < heights[r]){
                l++;
            }
            else{
                r--;
            }
            maxH = max(maxH, cur);
        }
        return maxH;
    }
};
