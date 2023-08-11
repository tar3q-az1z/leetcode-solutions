class Solution {
public:
    int addDigits(int num) {
        while(num > 9) num = getSum(num);
        return num;
    }
    int getSum(int n){
        int sum = 0;
        while(n){
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
};