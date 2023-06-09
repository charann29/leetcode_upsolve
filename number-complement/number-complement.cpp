class Solution {
public:
   int findComplement(int num) {
    unsigned int mask = 1;
    
    while (mask <= num) {
        num = num ^ mask;
        mask = mask << 1;
    }
    
    return num;
}

};