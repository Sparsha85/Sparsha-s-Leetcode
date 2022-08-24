class Solution {
public:
    bool isPowerOfThree(int n) {
       if(n==3 || n==1)
return true;
else if(n>3 && n%9==0)
return isPowerOfThree(n/9);
return false;
    }
};