class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        if(x == 0) return true;
        int di = floor(log10(x)) + 1;
        int *dis = new int[di];
        for(int i = di - 1;i >= 0; --i){
            dis[i] = x % 10;
            x /= 10;
        }
        for(int i = 0, j = di-1; i < (di/2); ++i,--j){
            if(dis[i] != dis[j]){
                return false;
            }
        }
        return true;
    }
};