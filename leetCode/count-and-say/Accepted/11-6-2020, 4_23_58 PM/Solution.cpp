// https://leetcode.com/problems/count-and-say

class Solution {
public:
    string conv(string s) {
    stack<char> check;
    int cnt = 1;
    string ans = "";
    check.push(s[0]);
    for(int i = 1; i < s.size(); i++) {
        if(check.top() == s[i]) cnt++;
        else {
            ans += to_string(cnt)+check.top();
            check.push(s[i]);
            cnt = 1;
        }
    }
    // cout << check.top() << " " << cnt << endl;
    ans += to_string(cnt)+check.top();
    return ans;
}
    string countAndSay(int n) {
        string precompute[31];
        precompute[0] = "1";
        for(int i = 1; i < 31; i++) precompute[i] = conv(precompute[i-1]);
        return precompute[n-1];
    }
};