class Solution {
private:
bool isOperator(string s)
{
    return s == "+" || s == "-" || s == "*" || s == "/";
}

int applyOperator(int a, int b, const string& op)
{
    if (op == "+") return a + b;
    else if (op == "-") return a - b;
    else if (op == "*") return a * b;
    else if (op == "/") return b != 0 ? a / b : 0;
    else return 0;
}
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> values;

        for (const string& s : tokens)
        {
            if (!isOperator(s))
            {
                values.push(stoi(s));
            }
            else
            {
                int b = values.top(); values.pop();
                int a = values.top(); values.pop();
                int result = applyOperator(a, b, s);

                values.push(result);
            }
        }

        return values.top();
        
    }
};
