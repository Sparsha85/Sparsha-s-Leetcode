class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> ans;
        if(n==0){
            ans.push_back(0);
            return ans;
        }
        
        else if(n==1){
            ans.push_back(0);
            ans.push_back(1);
            return ans;
        } else {
            ans.push_back(0);
            ans.push_back(1);
            int dp[n+1];
            dp[0] = 0;
            dp[1] = 1;
            for(int i = 2; i <= n; i++){
                dp[i] = dp[i/2] + i%2;
                ans.push_back(dp[i]);
            }
            
            return ans;
        }
    }
};