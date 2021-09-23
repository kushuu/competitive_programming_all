// https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters

class Solution {
public:
    int maxLength(vector<string>& arr) {
        int ans = 0, size = arr.size();
        
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                if(i != j) {
                    int l1 = arr[i].size(), l2 = arr[j].size();
                    unordered_set<char> check(arr[i].begin(), arr[i].end());
                    for(auto x : arr[j]) check.insert(x);
                    if(check.size() == l1+l2) ans = max(ans, l1+l2);
                }
            }
        }
        return ans;
    }
};