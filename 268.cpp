class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 1; i <= nums.size(); ++i) ans ^= i;
        for(auto i : nums) ans ^= i;
        return ans;
    }
};