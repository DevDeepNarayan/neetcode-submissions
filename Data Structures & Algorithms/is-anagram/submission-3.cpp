class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        vector<int> word(26, 0);
        for (int i = 0; i < s.size(); i++) {
            word[s[i] - 'a'] ++;
            word[t[i] - 'a'] --;
        }

        for (int val : word) {
            if (val != 0) {
                return false;
            }
        }

        return true;
    }
};
