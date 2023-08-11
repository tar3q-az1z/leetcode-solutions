class Solution {
public:
    map<int, int> m;
    int distinctPrimeFactors(vector<int>& nums) {
        for(auto i: nums) factor(i);
        return m.size();
    }
    void factor(int n){
        while(n % 2 == 0){
            n /= 2;
            ++m[2];
        }
        for(int d = 3; d * d <= n; d += 2){
            while(n % d == 0){
                n /= d;
                ++m[d];
            }
        }
        if(n > 1) ++m[n];
    }
};