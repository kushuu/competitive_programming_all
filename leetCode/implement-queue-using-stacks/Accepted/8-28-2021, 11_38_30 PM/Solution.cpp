// https://leetcode.com/problems/implement-queue-using-stacks

class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> check;
    MyQueue() {
        // lmao next time.
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        check.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        stack<int> temp;
        while(check.size() > 1) {
            temp.push(check.top());
            check.pop();
        }
        int ans = check.top();
        check.pop();
        while(!temp.empty()) {
            check.push(temp.top());
            temp.pop();
        }
        return ans;
    }
    
    /** Get the front element. */
    int peek() {
        stack<int> temp;
        while(check.size() > 1) {
            temp.push(check.top());
            check.pop();
        }
        int ans = check.top();
        // check.pop();
        while(!temp.empty()) {
            check.push(temp.top());
            temp.pop();
        }
        return ans;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return check.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */