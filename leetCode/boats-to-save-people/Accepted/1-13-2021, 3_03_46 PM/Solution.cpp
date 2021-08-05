// https://leetcode.com/problems/boats-to-save-people

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        
        int n = people.size();
        int ans = 0;
        for(int i = 0, end = n-1; i <= end;) {
            if(people[i]+people[end] <= limit) {
                ans++;
                i++;
                end--;
            }
            else {
                ans++;
                end--;
            }
        }
        return ans;
    }
};