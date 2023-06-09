class Solution {
public:
    int arrangeCoins(int n) {
    long long left = 0;
    long long right = n;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long curr = mid * (mid + 1) / 2;

        if (curr == n) {
            return mid;  // Found the exact number of coins
        } else if (curr < n) {
            left = mid + 1;  // Go to the right half
        } else {
            right = mid - 1;  // Go to the left half
        }
    }

    return right;  // Right will contain the largest complete row
}

};