class MinStack {
public:
    vector<int> arr;
    vector<int> minStack;

    void push(int val) {
        arr.push_back(val);
        if (minStack.empty() || val <= minStack.back()) {
            minStack.push_back(val);
        }
    }

    void pop() {
        if (minStack.back() == arr.back()) {
            minStack.pop_back();
        }
        arr.pop_back();
    }

    int top() { return arr.back(); }

    int getMin() { return minStack.back(); }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */