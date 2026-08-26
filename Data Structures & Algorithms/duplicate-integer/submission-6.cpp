class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        for (int left = 0; left < n; left++) {
            // Inner loop scans backward from the last element
            int right = n - 1;
            while (left < right) {
                if (nums[left] == nums[right]) {
                    return true;
                }
                right--; // Move the end pointer inward
            }
        }
        
        return false;
        
    }
};