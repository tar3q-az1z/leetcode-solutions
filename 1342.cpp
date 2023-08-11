class Solution {
public:
    int numberOfSteps(int num) {
        int ans = 0;
        while(num){
            if(num & 1){
                --num;
                ++ans;
            }else{
                ++ans;
                num >>= 1;
            }
        }
        return ans;
    }
};