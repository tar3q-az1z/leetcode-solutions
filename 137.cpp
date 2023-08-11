class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int oneBit[32] = {};
        int neg = 0;
        for(auto i : nums){
            int cnt = 0;
            if(i < 0) ++ neg;
            while(i){
                if(i & 1) ++oneBit[cnt];
                ++cnt;
                i /= 2;
            }
        }
        long long int ans = 0;
        for(int i = 0; i < 32; ++i){
            if(oneBit[i] % 3) ans += pow(2, i);
        }
        if(neg % 3) return -ans;
        return ans;
    }
};