class Solution {
public:
    string DectoBin(string n){
        int a=stoi(n);
        string result="";
        while(a>0){
            result += (a % 2) + '0';
            a/=2;
        }
        reverse(result.begin(), result.end());
        return result;
    }
    string convertDateToBinary(string date) {
        vector<string> arr;
        for(int i=0;i<date.size();i++ ){
            string word="";
            while(i<date.size() && date[i]!='-'){
                word+=date[i];
                i++;
            }
            if(!word.empty()){
                arr.push_back(word);
            }
        }
        vector<string> a1;
        for(int i=0;i<arr.size();i++){
            a1.push_back(DectoBin(arr[i]));
        }
        string result="";
        result+=a1[0];
        for(int i=1;i<a1.size();i++){
            result=result+'-'+a1[i];
        }
        return result;
    }
};