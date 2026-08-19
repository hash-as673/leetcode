class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin() , nums.end());
        int longest = 0;
        for(auto it: st){
            if(!st.contains(it - 1)){
                int cur = it;
                int cnt = 1;
                while(st.contains(cur + 1)){
                    cur++;
                    cnt++;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};