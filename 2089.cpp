class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ind;
        int l = 0, h = nums.size() - 1;
        int mid;
        sort(nums.begin(), nums.end());
        while(l <= h){
            mid = l + (h - l) / 2;
            if(nums[mid] == target){
                break;
            }
            else if(target < nums[mid]) h = mid - 1;
            else l = mid + 1;
        }
        if(l > h) return ind;
        int ans1 = mid, ans2 = mid;
        l = mid;
        h = nums.size() - 1;
        int rmid = 0;
        while(l <= h){
            rmid = l + (h - l) / 2;
            if(nums[rmid] == target){
                l = rmid + 1; ans2 = rmid;
            }
            else h = rmid - 1;
        }
        l = 0;
        h = mid - 1;
        int lmid = 0;
        while(l <= h){
            lmid = l + (h - l) / 2;
            if(nums[lmid] == target) {
                h = lmid - 1;
                ans1 = lmid;
            }
            else l = lmid + 1;
        }
        for(int i = ans1; i <= ans2; ++i) ind.push_back(i);
        return ind;
    }
};