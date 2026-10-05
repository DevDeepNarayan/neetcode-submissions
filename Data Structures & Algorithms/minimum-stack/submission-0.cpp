class MinStack {
private:
stack<int> nums;
stack<int> minStack; 
public:
    MinStack() {
        
    }
    
    void push(int val) {
        nums.push(val);
        val = min(val, minStack.empty() ? val : minStack.top());
        minStack.push(val);
    }
    
    void pop() {
        nums.pop();
        minStack.pop();
    }
    
    int top() {
        return nums.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
