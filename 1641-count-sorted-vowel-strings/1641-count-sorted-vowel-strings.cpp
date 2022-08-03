class Solution {
public:
    int countVowelStrings(int n) {
        int dp[n][5];
        for(int i = 0; i < n; i++){
            for(int j = 4; j >= 0; j--){
                if(i==0){
                    dp[i][j] = 1;
                }
                else if(i>0 && j!=4){
                    dp[i][j] = dp[i-1][j] + dp[i][j+1];
                } else if(i > 0 && j == 4){
                    dp[i][j] = 1;
                }
            }
        }
        
        n = n-1;
        int sum = 0;
        for(int i = 0; i < 5; i++){
            sum = sum + dp[n][i];
        }
        
        return sum;
    }
};