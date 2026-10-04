class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> sub;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (sub.count(diff)) {
                return {i, sub[diff]};
            } 
            sub[nums[i]] = i;
        }
        return {};
    }
};