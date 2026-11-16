class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current_count {0};
        int max_count {0};
        for (const int num : nums){
            if (num == 1){
                ++current_count;
                max_count = std::max(current_count, max_count);
            } else {
                current_count = 0;
            }
        }
        return max_count;
    }
};