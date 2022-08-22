class Solution {
public:
bool isPowerOfFour(int n)
{
    vector <long long int> dp;
    long long int total = 0;
    dp.push_back(1);
    long long int temp;
    
    while(dp[total]<n){
        total++;
        dp.push_back(4*dp[total-1]);
    }
    
    temp = dp[total];
    if(temp==n)
        return true;
    else 
        return false;
}
};