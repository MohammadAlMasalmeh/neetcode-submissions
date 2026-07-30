class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroCount = 0;
        int prod = 1;
        for(auto& num : nums){
            if(num == 0){
                zeroCount++;
                continue;
            }
            prod *= num;
        }

        vector<int> ans;
        for(auto& num : nums){
            if(zeroCount >= 2){
                ans.push_back(0);
            }
            else if(zeroCount == 1){
                ans.push_back(num == 0 ? prod : 0);
            }
            else{
                ans.push_back(prod / num);
            }
        }
        return ans;
    }
};