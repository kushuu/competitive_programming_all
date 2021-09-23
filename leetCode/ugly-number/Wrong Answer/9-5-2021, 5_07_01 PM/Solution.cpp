// https://leetcode.com/problems/ugly-number

class Solution {
public:
    bool isUgly(int n) {
        n = abs(n);
        unordered_set<int> check;
        while (n%2 == 0) { 
            check.insert(2);
            n = n/2; 
        } 

        for (int i = 3; i <= sqrt(n); i = i+2) { 
            while (n%i == 0) { 
                check.insert(i);
                n = n/i; 
            } 
        } 

        if (n > 2) check.insert(n); 
        if(check.find(2) != check.end()) check.erase(check.find(2));
        if(check.find(3) != check.end()) check.erase(check.find(3));
        if(check.find(5) != check.end()) check.erase(check.find(5));
        
        return check.empty();
    }
};