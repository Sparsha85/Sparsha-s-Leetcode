class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int l = 0, r = 0, res = INT_MIN, tmp = 1;
        for(; r < nums.size(); ++r){
            while(nums[r] == 0 && l < r){
                res = max(res, tmp);
                tmp /= nums[l++];
            }
            if(nums[r] == 0){
                ++l;
                res = max(res, 0);
            }
            else{
                tmp *= nums[r];
                res = max(res, tmp);
            }
        }
        while(l < r){
            res = max(res, tmp);
            tmp /= nums[l++];
        }
        return res;
    }
};