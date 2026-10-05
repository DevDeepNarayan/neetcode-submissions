class Solution {
public:
    int binarySearch(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;

        while (l <= r) {
            int middle = l + (r - l) / 2;

            if (nums[middle] == target) {
                return middle;
            } else if (nums[middle] < target) {
                l = middle + 1;
            } else {
                r = middle - 1;
            }
        }

        return -1;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int COLS = matrix[0].size();
        int res;

        for (int i = 0; i < n; i++) {
            if (matrix[i][-1] < target) {
                int subarrayIndex = binarySearch(matrix[i], target);

                if (subarrayIndex != -1) {
                    return true;
                }
            }
        }

        return false;
    }
};
