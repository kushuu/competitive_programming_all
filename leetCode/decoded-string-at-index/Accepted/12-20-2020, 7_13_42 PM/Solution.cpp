// https://leetcode.com/problems/decoded-string-at-index

class Solution {
public:
    string decodeAtIndex(string S, int K) {
        long long int size = 0;
        for(auto i : S) {
            if(i >= 'a' && i <= 'z') size++;
            else size *= i-'1'+1;
        }
        reverse(S.begin(), S.end());
        // cout << S << " " << size ;
        for(auto i : S) {
            K %= size;
            if(!K && i >= 'a' && i <= 'z') {
                string ans(1,i);
                return ans;
                
            }
            if(i >= 'a' && i <= 'z') size--;
            else size/=(i-'1'+1);
        }
        return "";
    }
};