class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>s;
        vector<int>c;
        c = nums;
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size()-1;
        bool flag = false;
        while(left < right && flag == false){
            if((nums[left] + nums[right]) == target){
                int i = 0;
                for(i = 0; i < c.size(); ++i){
                    if(nums[left] == c[i]){
                        s.push_back(i);
                        break;
                    }
                }
                for(int j = 0; j < c.size(); ++j){
                    if(i == j) continue;
                    if(nums[right] == c[j]){
                        s.push_back(j); break;
                    }
                }
                flag = true;
                break;
            }
            if(target < (nums[left] + nums[right])){
                --right;
            }
            else{
                ++left;
            }
        }
        return s;
    }
};