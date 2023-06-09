class Solution {
public:
    int dayOfYear(string date) {
    istringstream iss(date);
    vector<string> tokens;
    string token;
    
    while (getline(iss, token, '-')) {
        tokens.push_back(token);
    }
    
    int year = stoi(tokens[0]);
    int month = stoi(tokens[1]);
    int day = stoi(tokens[2]);
    
    vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int dayNumber = day;
    
    for (int i = 0; i < month - 1; ++i) {
        dayNumber += daysInMonth[i];
    }
    
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) && month > 2) {
        dayNumber++;
    }
    
    return dayNumber;
}

};