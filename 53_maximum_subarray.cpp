class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum = 0;
        int max_sum = nums[0];
        for(auto it : nums){
            current_sum = max(0, current_sum);
            current_sum += it;
            max_sum = max(max_sum,current_sum);
        }
        return max_sum;
    }
};