// https://leetcode.com/problems/validate-stack-sequences

// class Solution {
// public:
//     bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
//         stack<int> check;
//         int size = pushed.size();
//         if(!size) return true;
        
//         int push_ptr = 0, pop_ptr = 0;
//         while(pop_ptr < size and push_ptr < pushed.size()) {
//             if(popped[pop_ptr] != pushed[push_ptr]) push_ptr++;
//             else {
//                 pushed.erase(pushed.begin()+push_ptr);
//                 push_ptr--;
//                 pop_ptr++;
//             }
//             push_ptr = max(push_ptr, 0);
//         }
//         return pushed.empty();
//     }
// };
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> stack;
        int i = 0;
        for (auto x : pushed) {
            stack.push(x);
            while (stack.size() && stack.top() == popped[i]) {
                stack.pop();
                i++;
            }
        }
        return stack.size() == 0;
    }
};