class Solution {
public:

bool hasGroupsSizeX(vector<int>& deck) {
    unordered_map<int, int> freq;
    
    for (int num : deck) {
        freq[num]++;
    }
    
    int gcd = freq.begin()->second;
    for (const auto& [num, count] : freq) {
        gcd = std::gcd(gcd, count);
    }
    
    return gcd >= 2;
}

};