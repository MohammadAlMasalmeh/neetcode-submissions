class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> freq;
        int i = 0;
        int j = 0;
        int ans = 0;
        int cur = 0;
        while(i < s.length()){
            while(j < s.length() && i < s.length() && freq[s[j]] == 0){
                freq[s[j]]++;
                cur++;
                ans = max(ans, cur);
                j++;
            }
            freq[s[i]]--;
            cur--;
            i++;
        }
        return ans;
    }
};
