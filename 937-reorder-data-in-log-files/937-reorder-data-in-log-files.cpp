class Solution {
public:
    
    static bool compare(string s1,string s2){
        string aa = s1.substr(s1.find(' '));
        string bb = s2.substr(s2.find(' '));
        
        return aa == bb ? s1 < s2 : aa < bb;
    }
    
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector <string> let;
        vector <string> dig;
        
        int sizeoflogs = logs.size();
        
        for(int i = 0; i < sizeoflogs; i++){
            string temp = logs[i];
            int indexafterspace = temp.find(' ');
            indexafterspace = indexafterspace+1;
            char temp_char = temp[indexafterspace];
            if(temp_char - 'a' >= 0 && temp_char - 'a' <=25){
                let.push_back(logs[i]);
            } else {
                dig.push_back(logs[i]);
            }
        }
        
        sort(let.begin(), let.end(), compare);
        let.insert(let.end(), dig.begin(), dig.end());
        return let;
    }
};