vector<int> twoSum(vector<int>& nums, int target) {
    int j = 1;
    int i = 0;
    vector<int> nums2;
    while(true) {
        if(j == nums.size()) {
            i++;
            j = i + 1;
        }
        if(nums[i] + nums[j] != target) {
            j++;
        }
        else if(nums[i] + nums[j] == target) {
            nums2.push_back(i);
            nums2.push_back(j);
            return nums2;
        }
    }
    return nums;
}
