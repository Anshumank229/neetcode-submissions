class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.empty()) return 0;

        int u_count = 1; 
        for (int high = 1; high < nums.size(); high++) {
            if (nums[high] != nums[high - 1]) {
                nums[u_count] = nums[high];
                u_count++;
            }
        }
        return u_count;
    }
};