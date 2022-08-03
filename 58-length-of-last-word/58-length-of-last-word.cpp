class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int initial_length = s.length();
        
        int space = 0;
        if(s[initial_length - 1]==' '){
            while(s[initial_length - 1] == ' '){
                s.erase(initial_length - 1, 1);
                initial_length -= 1;
            }
        }
            
        
        int l = s.length();
        while(l > 0){
            if(s[l-1]==' ')
                break;
            else 
                l = l-1;
                count++;
        }
        
        return count;
    }
};