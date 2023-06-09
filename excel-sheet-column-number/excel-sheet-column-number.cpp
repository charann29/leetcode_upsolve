class Solution {
public:
int titleToNumber(string columnTitle) {
    int result = 0;
    int n = columnTitle.size();

    for (int i = n - 1; i >= 0; i--) {
        int value = columnTitle[i] - 'A' + 1;
        result += value * pow(26, n - i - 1);
    }

    return result;
}

int main() {
    string columnTitle1 = "A";
    cout << titleToNumber(columnTitle1) << endl;  // Output: 1

    string columnTitle2 = "AB";
    cout << titleToNumber(columnTitle2) << endl;  // Output: 28

    string columnTitle3 = "ZY";
    cout << titleToNumber(columnTitle3) << endl;  // Output: 701

    return 0;
}

};