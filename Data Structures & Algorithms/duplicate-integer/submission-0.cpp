class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        for (int low = 0; low < n; low++) {
            for (int high = low + 1; high < n; high++) {
                if (nums[low] == nums[high]) {
                    return true;
                }
            }
        }
        return false;
        
    }
};