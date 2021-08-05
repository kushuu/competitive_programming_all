// https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string> check;
        // vector<string> temp;
        int size = s.size();
        string front = "";
        for(int i = 0; i < 32-k; i++) front += '0';
        for(int i = 0; i <= size-k; i++) {
            check.insert(front + s.substr(i, k));
            // temp.push_back(s.substr(i, k));
        }
        // for(auto i : check) cout << i << " " ;
        int check_till = 1<<k-1;
        for(int i = 0; i <= check_till; i++) {
            string tt = bitset<32>(i).to_string();
            if(check.find(tt) == check.end()) return 0;
        }
        return 1;
    }
};