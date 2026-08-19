class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current_count = 0;
        int max_count = 0;
        for(auto it: nums){
            if (it == 1){
                current_count++;
            } else {
                current_count = 0;
            }
            max_count = max(max_count, current_count);
        }
        return max_count;
    }
};