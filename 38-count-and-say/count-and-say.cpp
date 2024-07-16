class Solution {
public:

string countAndSay(int n) {
    if (n == 1) return "1";
    
    string current = "1";
    
    for (int i = 2; i <= n; ++i) {
        string next = "";
        int len = current.size();
        
        for (int j = 0; j < len; ++j) {
            int count = 1;
            while (j + 1 < len && current[j] == current[j + 1]) {
                ++count;
                ++j;
            }
            next += to_string(count) + current[j];
        }
        
        current = next;
    }
    
    return current;
}

};