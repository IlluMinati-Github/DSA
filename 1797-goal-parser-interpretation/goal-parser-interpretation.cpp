class Solution {
public:
    string interpret(string command) {
        string s="";
        for(int i=0;i<command.size();i++){
            if (command[i]=='(' && command[i+1]==')'){
                s+='o';
            }
            else if (command[i]=='(' && command[i+1]!=')'){
                continue;
            }
            else if(command[i]==')') {
                continue;
            }
            else {
                s+=command[i];
            }
        }
        return s;
    }
};