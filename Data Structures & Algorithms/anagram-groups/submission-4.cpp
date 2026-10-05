class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;

        for (const auto &s : strs) {
            vector<int> alph(26, 0);

            for (char c : s) {
                alph[c - 'a'] ++;
            }

            string key = "";
            for (int i = 0; i < 26; i++) {
                key += to_string(alph[i]) + "#";
            }

            res[key].push_back(s);
        }

        vector<vector<string>> result;

        for (const auto & pair : res) {
            result.push_back(pair.second);
        }

        return result;
    }
};
