// https://leetcode.com/problems/maximum-frequency-stack

class FreqStack {
public:
    int max_frequency; // keep note of the current maximum frequency
    unordered_map<int, int> freq_mp; // to store the freq of numbers
    unordered_map<int, stack<int>> freq_stack_mp; // to store the numbers with same freq in a stack
    
    FreqStack() {
        max_frequency=0;
    }
    
    void push(int x) {
        ++freq_mp[x];
        
        if(max_frequency<freq_mp[x]) max_frequency = freq_mp[x];
        
        freq_stack_mp[freq_mp[x]].push(x);
    }
    
    int pop() {
        int curr_top = freq_stack_mp[max_frequency].top();
        
        freq_stack_mp[max_frequency].pop();
        --freq_mp[curr_top];
        
        if(freq_stack_mp[max_frequency].empty()) {
            freq_stack_mp.erase(max_frequency);
            --max_frequency;
        }
        
        return curr_top;
    }
};