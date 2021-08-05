// https://leetcode.com/problems/maximum-repeating-substring

class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int seq_len = sequence.size(), wrd_len = word.size();
        if(!seq_len || !wrd_len) return 0;
        
        int ans = 0;
        for(int i = 0; i < seq_len - wrd_len; i++) {
            if(sequence.substr(i, wrd_len) == word) ans++;
        }
        return ans;
    }
};