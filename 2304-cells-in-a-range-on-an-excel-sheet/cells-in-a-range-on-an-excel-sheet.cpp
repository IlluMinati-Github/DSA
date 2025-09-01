class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> result;
        char a = s[3];  
        char b = s[0];  
        char c = s[4];  
        char d = s[1];  
        
        for (char i = b; i <= a; i++) {          
            for (char j = d; j <= c; j++) {      
                string word = "";
                word += i;   
                word += j;
                result.push_back(word);
            }
        }
        return result;
    }
};
