class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
    vector<string> daysOfWeek = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    vector<int> monthOffset = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4}; // Month offset for Zeller's Congruence
    if (month < 3) {
        year--;
    }
    int weekDay = (year + year / 4 - year / 100 + year / 400 + monthOffset[month - 1] + day) % 7;

    return daysOfWeek[weekDay];
}
};