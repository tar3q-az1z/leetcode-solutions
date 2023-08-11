class Solution {
public:
    int commonFactors(int a, int b) {
        map<int, int> m;
        for(int i = 1; i * i <= a; ++i){
            if(a % i == 0){
                if(i == a / i) ++m[i];
                else{
                    ++m[i];
                    ++m[a / i];
                }
            }
        }
        for(int i = 1; i * i <= b; ++i){
            if(b % i == 0){
                if(i == b / i) ++m[i];
                else{
                    ++m[i];
                    ++m[b / i];
                }
            }
        }
        int ans = 0;
        for(auto i: m){
            if(i.second > 1) ++ans;
        }
        return ans;
    }
};