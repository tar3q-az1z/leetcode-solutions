class Solution {
public:
    int mySqrt(int x) {
        long long int l = 0, r = x, mid, ans = 0;
        while(l <= r){
            mid = l + (r - l) / 2;
            if(mid * mid == x) return mid;
            if(mid * mid > x){
                r = mid - 1;
            }else{
                l = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};