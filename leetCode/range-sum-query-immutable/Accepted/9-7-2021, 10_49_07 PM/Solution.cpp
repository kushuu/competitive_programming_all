// https://leetcode.com/problems/range-sum-query-immutable

class NumArray {
public:
    vector<int> check;
    NumArray(vector<int>& nums) {
        check.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++) check.push_back(nums[i]+check[i-1]);
        // for(auto i : check) cout << i << " " ;
    }
    
    int sumRange(int left, int right) {
        if(!left) return check[right];
        return check[right]-check[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */