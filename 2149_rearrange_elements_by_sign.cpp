class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result(nums.size());
            int positiveIndex = 0;
            int negativeIndex = 1;

        
        for(int i = 0 ; i < nums.size() ; i++){
            if (nums[i]>= 0  && positiveIndex < nums.size()){
                result[positiveIndex] = nums[i];
                positiveIndex += 2;
            }
            if (nums[i]< 0  && negativeIndex < nums.size()){
                result[negativeIndex] = nums[i];
                negativeIndex += 2;
            }
        }

        return result;
    }
};