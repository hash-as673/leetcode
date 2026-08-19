class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int current_element = 0;
        for(int i = 0; i < nums.size() ; i++){
            current_element ^= nums[i];    
        }
        return current_element;
    }
};