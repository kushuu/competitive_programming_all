// https://leetcode.com/problems/roman-to-integer

class Solution {
public:
    int romanToInt(string s) {
        //int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000}; 
        //string sym[] = {"","","","","","","","","","","D","","M"};
        int ans = 0;
        //map<string, int> RtoI = {"I":1,"IV":4,"V":5,"IX":9,"X":10,"XL":40,"L":50,"XC":90,"C":100,"CD":400,"D":500,"CM":900,"M":1000};
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'I')
                if(s[i+1] == 'V') {
                    ans += 4;
                    i++;
                }
                else if(s[i+1] == 'X') {
                        ans += 9;
                        i++;
                    }
                else
                    ans += 1;
            else if(s[i] == 'X')
                    if(s[i+1] == 'L') {
                        ans += 40;
                        i++;
                    }
                    else if(s[i+1] == 'C') {
                        ans += 90;
                        i++;
                    }
                    else
                        ans += 10;
            else if(s[i] == 'L')
                    ans += 50;
            else if(s[i] == 'C')
                    if(s[i+1] == 'D') {
                        ans += 400;
                        i++;
                    }
                    else if(s[i+1 == 'M']) {
                        ans += 900;
                        i++;
                    }
                    else
                        ans += 100;
            else if(s[i] == 'D')
                    ans += 500;
            else if(s[i] == 'M')
                    ans += 1000;
                
        }
        return ans;
    }
};