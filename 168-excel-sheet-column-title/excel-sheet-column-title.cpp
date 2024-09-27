class Solution {
public:
    string convertToTitle(int columnNumber) {
        string str = "";
        while (columnNumber > 0) {
            columnNumber--; // To handle 1-based index
            char ch = 'A' + (columnNumber % 26); // Find the corresponding character
            str += ch; // Append the character to the string
            columnNumber /= 26; // Move to the next place value
        }
        reverse(str.begin(), str.end()); // Reverse the string to get the correct title
        return str;
    }
};
