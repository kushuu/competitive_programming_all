// https://leetcode.com/problems/roman-to-integer

class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        
        // handle few special cases
        if(s.find("IV")!=string::npos) // 4 = -2 + 1 + 5
           ans-=2;
        if(s.find("IX")!=string::npos) // 9 = -2 + 1 + 10
           ans-=2;
        if(s.find("XL")!=string::npos) // 40 = -20 + 10 + 50
           ans-=20;
        if(s.find("XC")!=string::npos) // 90 = -20 + 10 + 100
           ans-=20;
        if(s.find("CD")!=string::npos) // 400 = -200 + 100 + 500
           ans-=200;
        if(s.find("CM")!=string::npos) // 900 = -200 + 100 + 1000
           ans-=200;

        // Do according to the question
        for(int count=0;count<s.length();++count){
            if(s[count]=='M') ans+=1000;
            if(s[count]=='D') ans+=500;
            if(s[count]=='C') ans+=100;
            if(s[count]=='L') ans+=50;
            if(s[count]=='X') ans+=10;
            if(s[count]=='V') ans+=5;
            if(s[count]=='I') ans+=1;
        }
        
        return ans;
    }
};