class Solution {
public:
    string intToRoman(int A) {
            vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
            vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

            string roman = "";
            int i = 0;

            while (A > 0) {
                if (A >= values[i]) {
                    roman += symbols[i];
                    A -= values[i];
                } else {
                    i++;
                }
            }

            return roman;
            }
};