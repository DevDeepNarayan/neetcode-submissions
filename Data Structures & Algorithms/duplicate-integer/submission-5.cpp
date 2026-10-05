class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> count;

        for (int n : nums) {
            count.insert(n);
        }

        return nums.size() != count.size();
    }
};