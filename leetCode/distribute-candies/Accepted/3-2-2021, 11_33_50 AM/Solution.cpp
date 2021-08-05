// https://leetcode.com/problems/distribute-candies

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int size = candyType.size();
        unordered_map<int, int> check;
        for(auto i : candyType) check[i]++;
        
        return min(size/2, (int)check.size());
    }
};