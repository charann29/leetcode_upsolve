class Solution {
public:

std::string convertToBase7(int num) {
    if (num == 0) {
        return "0";
    }

    std::string result = "";
    bool negative = false;

    if (num < 0) {
        negative = true;
        num = -num;
    }

    while (num > 0) {
        result = std::to_string(num % 7) + result;
        num /= 7;
    }

    if (negative) {
        result = "-" + result;
    }

    return result;
}

};