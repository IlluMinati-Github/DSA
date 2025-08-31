class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        for(int i=0;i<edges.size();i++){
            for(int j=0;j<2;j++){
                for(int k=0;k<edges.size();k++){
                    if(edges[i][j]==edges[k][j] && k!=i) return edges[i][j];
                }
            }
        }
        return -1;
    }
};