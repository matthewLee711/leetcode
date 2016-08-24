class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> compare;
        vector<int> data;
        for(int i = 0; i < nums.size(); i++) {
            compare.insert(nums[i], i);
        }
        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if(compare.at(complement)) {
                data.push_back(complement);
                data.push_back(nums[i]);
            }
        }
        return data;
    }
};
