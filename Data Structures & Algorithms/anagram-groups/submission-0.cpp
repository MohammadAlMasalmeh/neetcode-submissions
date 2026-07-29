class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(auto& s : strs){
            vector<int> count(26, 0);

            for(char c : s){
                count[c- 'a']++;
            }
            string key;
            for(int num : count){
                key += to_string(num) + "-";
            }

            res[key].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto& [key, group] : res){
            ans.push_back(group);
        }
        return ans;
    }
};
