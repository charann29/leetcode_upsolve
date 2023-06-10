#include <climits> // for INT_MAX

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == 0) return INT_MAX; // Handling division by zero
        if (dividend == 0) return 0; // Handling dividend zero case

        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1; // Determine the sign of the result
        long long dvd = abs((long long)dividend); // Convert to long long to handle INT_MIN
        long long dvs = abs((long long)divisor);

        long long quotient = 0;
        while (dvd >= dvs) {
            long long temp = dvs, multiple = 1;
            while (dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            dvd -= temp;
            quotient += multiple;
        }

        quotient = sign * quotient;
        if (quotient > INT_MAX) return INT_MAX; // Handling overflow
        if (quotient < INT_MIN) return INT_MIN; // Handling underflow

        return (int)quotient;
    }
};
