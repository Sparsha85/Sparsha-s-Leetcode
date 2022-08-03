class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set <int> s1(nums1.begin(), nums1.end());
        set <int> s2(nums2.begin(), nums2.end());
        
        vector <int> ans;
        set <int> :: iterator itr1;
        set <int> :: iterator itr2;
        
        for(itr1 = s1.begin(); itr1!=s1.end(); itr1++){
            for(itr2 = s2.begin(); itr2!=s2.end(); itr2++){
                if(*itr1==*itr2){
                    ans.push_back(*itr1);
                }
            }
        }
        
        return ans;
    }
};