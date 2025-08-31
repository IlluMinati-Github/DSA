class Solution {
public:
    int NoOfWords(string s){
        int count=0;
        for(int i=0;i<s.size();i++){
            string word="";
            while(i<s.size() && s[i]!=' '){
                word+=s[i];
                i++;
            }
            if(!word.empty()) count++;
        }
        return count;
    }
    int mostWordsFound(vector<string>& sentences) {
        int max=-1;
        for(int i=0;i<sentences.size();i++){
            if(max<NoOfWords(sentences[i])) max=NoOfWords(sentences[i]);
        }
        return max;
        
    }
};