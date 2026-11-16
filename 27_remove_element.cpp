class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto slow {0};
        for (auto fast {0} ; fast < std::ssize(nums) ; ++fast){
            if (nums[fast] != val){
                if (nums[slow] != nums[fast]){
                    nums[slow] = nums[fast];
                }
                ++slow;
            }
        }
        return static_cast<int>(slow);
    }
};