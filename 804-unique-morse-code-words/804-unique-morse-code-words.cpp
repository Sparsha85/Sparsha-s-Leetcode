class Solution {
public:
    
    string findstring(string s, unordered_map <char, string> mp){
        string ans = "";
        int l = s.length();
        for(int i = 0; i < l; i++){
            string temp = mp[s[i]];
            ans+=temp;
        }
        
        cout << ans << endl;
        return ans;
    }
    
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map <char, string> mp;
        vector <char> letters;
        vector <string> codes = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        for(int i = 0; i < 26; i++){
            letters.push_back('a' + i);
        }
        
        for(int i = 0; i < 26; i++){
            mp[letters[i]] = codes[i];
        }
        
        set <string> s;
        int l = words.size();
        for(int i = 0; i < l; i++){
            string temp;
            temp = findstring(words[i], mp);
            s.insert(temp);
        }
        
        
        return s.size();
    }
};