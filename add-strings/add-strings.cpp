class Solution {
public:
string addStrings(string num1, string num2) {
    int n1 = num1.size();
    int n2 = num2.size();
    int carry = 0;
    string result;

    // Iterate through the digits from right to left
    for (int i = n1 - 1, j = n2 - 1; i >= 0 || j >= 0 || carry > 0; i--, j--) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        int digit = sum % 10;

        // Prepend the current digit to the result
        result = to_string(digit) + result;
    }

    return result;
}

};