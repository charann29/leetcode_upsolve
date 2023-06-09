class Solution {
public:
   bool isPowerOfFour(int n) {
        if (n <= 0 || (n & (n - 1)) != 0)
            return false;
        
        int countZeros = 0;
        while (n > 1) {
            n >>= 1;
            countZeros++;
        }
        
        return countZeros % 2 == 0;
    }
};