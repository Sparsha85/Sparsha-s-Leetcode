class Solution {
public:
    int maxProduct(vector<int>& nums) {
        make_heap(nums.begin(), nums.end());
        int i = nums.front();
        pop_heap(nums.begin(), nums.end());
        int j = nums.front();
        int ans = (i-1)*(j-1);
        return ans;
    }
};