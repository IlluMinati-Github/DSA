class Solution {
public:
    int findClosest(int x, int y, int z) {
        int distX = abs(x - z);
         int distY = abs(y - z);
        int a=1;
        int b=2;
        int c=0;
        if (distX < distY) return a; 
        else if (distX==distY) return c;
        else return b;
    }
};