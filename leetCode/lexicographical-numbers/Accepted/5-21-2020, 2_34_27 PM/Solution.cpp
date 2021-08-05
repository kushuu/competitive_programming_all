// https://leetcode.com/problems/lexicographical-numbers

class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string> basic;
        for(int i = 1; i <= n; i++) basic.push_back(to_string(i));
        sort(basic.begin(), basic.end());
        vector<int> answer;
        for(int i = 0; i < n; i++) answer.push_back(stoi(basic[i]));
        return answer;
    }
};