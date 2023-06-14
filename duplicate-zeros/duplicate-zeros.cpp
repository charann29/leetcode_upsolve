class Solution {
public:
        void duplicateZeros(vector<int>& arr) {
            int n = arr.size();
            int shift = 0;

            // Count the number of zeros to determine the required shift
            for (int i = 0; i < n; i++) {
                if (arr[i] == 0) {
                    shift++;
                }
            }

            // Iterate from right to left and perform the shift
            for (int i = n - 1; i >= 0; i--) {
                if (arr[i] == 0) {
                    if (i + shift < n) {
                        arr[i + shift] = 0;
                    }
                    shift--;
                }

                if (i + shift < n) {
                    arr[i + shift] = arr[i];
                }
            }
        }
};