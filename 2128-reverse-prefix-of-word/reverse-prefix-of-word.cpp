class Solution {
public:
    int firstOccurence(string word,char ch){
        int id=-1;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch) {
                id=i;
                break;
            }
        }
        return id;
    }
    string reversePrefix(string word, char ch) {
        int id = firstOccurence(word, ch);
        string result="";
        string a="";
        string b="";
        for(int i=0;i<id+1;i++){
            a+=word[i];
        }
        for(int i=id+1;i<word.size();i++){
            b+=word[i];
        }
        string c="";
        for(int i=a.size()-1;i>=0;i-- ){
            c+=a[i];
        }
        result=c+b;
        return result;
    }
};