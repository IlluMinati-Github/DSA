class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(int i=0;i<details.size();i++){
            string word="";
            word+=details[i][11];
            word+=details[i][12];
            int a=stoi(word);
            if(a>60) count++;

        }
        return count;
    }
};