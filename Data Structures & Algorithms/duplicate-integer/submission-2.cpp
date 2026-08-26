class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        // Check if any adjacent elements are equal
        for (size_t i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }

        return false;
    }
    
};