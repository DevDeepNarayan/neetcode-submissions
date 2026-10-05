class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> openToClose = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char c : s) {
            if (openToClose.count(c)) {
                if (!stack.empty() && stack.top() == openToClose[c]) {
                    stack.pop();
                }
                else {
                    return false;
                }
            }
            else {
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
