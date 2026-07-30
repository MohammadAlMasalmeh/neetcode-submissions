class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset(nums.begin(), nums.end());
        int longest = 0;
        for(int num : nums){
            if(numset.find(num - 1) == numset.end()){
                int i = 1;
                while(numset.find(num + i) != numset.end()){
                    i++;
                }
                longest = max(longest, i);
            }
        }

        return longest;
    }
};
