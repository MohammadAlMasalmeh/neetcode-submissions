class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char, int> sTable;
        unordered_map<char, int> tTable;

        for(auto& c : s){
            sTable[c] += 1;
        }

        for(auto& c : t){
            tTable[c] += 1;
        }

        return sTable == tTable;

    }
};
