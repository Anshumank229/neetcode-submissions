class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int>mp;
        for (int i =0;i<nums.size();i++){
            int req_ans=target-nums[i];
            if(mp.find(req_ans)!=mp.end()){
                return {mp[req_ans],i};
            }
            mp[nums[i]]=i;
        }
        return {};
        
    }
};
