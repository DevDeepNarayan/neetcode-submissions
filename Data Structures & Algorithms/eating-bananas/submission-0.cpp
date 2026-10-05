class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_pile = INT_MIN;
        for (int b : piles) {
            max_pile = max(max_pile, b);
        }

        int l = 1;
        int r = max_pile - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (totalHours(piles, mid) <= h) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }

    int totalHours(vector<int> piles, int k) {
        int sum = 0;

        for (int p : piles) {
            sum += (p + k - 1) / k;
        }

        return sum;
    }
};
