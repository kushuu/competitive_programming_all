// https://leetcode.com/problems/fizz-buzz

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n);
        
        // 2ms
        // for(int i = 1; i <= n; i++) {
        //     if(i%3 == 0 and i%5 == 0) ans[i-1] = "FizzBuzz";
        //     else if(i%3 == 0) ans[i-1] = "Fizz";
        //     else if(i%5 == 0) ans[i-1] = "Buzz";
        //     else ans[i-1] = to_string(i);
        // }
        // return ans;
        
        for(int i = 1; i <= n; i++) {
            string temp = "";
            if(i%3 == 0) temp += "Fizz";
            if(i%5 == 0) temp += "Buzz";
            if(temp == "") ans[i-1] = to_string(i);
            else ans[i-1] = temp;
        }
        return ans;
    }
};