class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int total_sum = accumulate(nums.begin(), nums.end() , 0);
        int actual_sum = nums.size()  * ( (nums.size() + 1)) / 2;
        return actual_sum - total_sum;
    }
};