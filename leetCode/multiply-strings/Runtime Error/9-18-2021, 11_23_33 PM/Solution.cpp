// https://leetcode.com/problems/multiply-strings

class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" or num2 == "0") return "0";
        
        long long int n1 = stoi(num1), n2 = stoi(num2);
        string ans = to_string(n1*n2);
        return ans;
    }
};