// https://leetcode.com/problems/implement-stack-using-queues

class MyStack {
public:
    stack<int> check;
    /** Initialize your data structure here. */
    MyStack() {
        // lmao empty.
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        check.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int ans = check.top();
        check.pop();
        return ans;
    }
    
    /** Get the top element. */
    int top() {
        return check.top();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return check.empty();        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */