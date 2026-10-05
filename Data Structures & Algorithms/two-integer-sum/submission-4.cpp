class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> index;

        for (int i = 0; i < nums.size(); i++) {
            int difference = target - nums[i];

            if (index.find(difference) != index.end()) {
                return {index[difference], i};
            }

            index.insert({nums[i], i});
        }

        return {};
    }
};
