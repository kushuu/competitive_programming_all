// https://leetcode.com/problems/distance-between-bus-stops

class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int sum = accumulate(distance.begin(), distance.end(), 0), temp = 0;
        if(start > destination) swap(start, destination);
        for(int i = start; i < destination; i++) temp+=distance[i];
        return min(temp, sum-temp);
    }
};