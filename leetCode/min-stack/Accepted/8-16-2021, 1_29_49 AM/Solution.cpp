// https://leetcode.com/problems/min-stack

class MinStack {
public:
    stack<pair<int, int>> check;
    /** initialize your data structure here. */
    MinStack() {
        stack<pair<int, int>> check;
    }
    
    void push(int val) {
        if(check.empty()) check.push({val, val});
        else check.push({val, min(check.top().second, val)});
    }
    
    void pop() {
        if(!check.empty())check.pop();
    }
    
    int top() {
        return check.top().first;
    }
    
    int getMin() {
        return check.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */