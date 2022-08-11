class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        unordered_map<char,int>mpp;
        for(int i = 0; i < n; i++){
            mpp[s[i]] = i;
        }
        int maxi = 0, prev = -1;
        vector<int>ans;
        for(int i = 0; i < n; i++){
            maxi = max(maxi,mpp[s[i]]);     
            if(maxi == i){                          
                ans.push_back(maxi - prev);
                maxi = -1;
                prev = i;
            }
        }
        return ans;
    }
};