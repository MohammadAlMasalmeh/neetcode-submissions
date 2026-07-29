class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(auto& num : nums){
            if(!set.insert(num).second){
                return true;
            }
        }
        return false;
    }
};