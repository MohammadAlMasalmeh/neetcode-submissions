class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k){
                int cur = nums[i] + nums[j] + nums[k];
                if(cur > 0){
                    k--;
                }
                else if(cur < 0){
                    j++;
                }
                else{
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    while(j < nums.size() && nums[j] == nums[j-1]){
                        j++;
                    }
                }
            }
        }
        return ans;
    }
};
