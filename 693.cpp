class Solution {
public:
    bool hasAlternatingBits(int n) {
        n ^= (n >> 2);
        if(n & (n - 1)) return false;
        else return true;
    }
};