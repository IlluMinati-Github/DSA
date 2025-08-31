class Solution {
public:
    int maximum2(vector<int>& a){
        int maxi = INT_MIN;
        int id = -1;
        for(int i=0; i<a.size(); i++){
            if(maxi < a[i]){
                maxi = a[i];
                id = i;
            }
        }
        return id;
    }

    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> result;
        while(!names.empty()){
            int id = maximum2(heights);
            result.push_back(names[id]);       
            names.erase(names.begin()+id);     
            heights.erase(heights.begin()+id);
        }
        return result;
    }
};
