
class Solution {
    public:
        int minFlips(int a, int b, int c) {
            int count = 0;
            
            for (int i = 0; i < 32; i++) {
                int bit_a = (a >> i) & 1;  // Get the i-th bit of a
                int bit_b = (b >> i) & 1;  // Get the i-th bit of b
                int bit_c = (c >> i) & 1;  // Get the i-th bit of c
                
                if ((bit_a | bit_b) != bit_c) {
                    if (bit_c == 1) {
                        count++;  // Flip either bit_a or bit_b to 1
                    } else {
                        count += (bit_a + bit_b);  // Flip both bit_a and bit_b to 0
                    }
                }
            }
            
            return count;
        }
    };
