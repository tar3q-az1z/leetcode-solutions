int memo[50];
class Solution {
public:
    int fib(int n) {
        if(memo[n]) return memo[n];
        if(n == 0) return 0;
        if(n <= 2) return 1;
        return memo[n] = fib(n - 1) + fib(n - 2);
    }
};