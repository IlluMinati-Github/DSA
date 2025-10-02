class Solution {
    public int maxBottlesDrunk(int numBottles, int numExchange) {
        int bottlesDrunk = numBottles;
        int emptyBottles = numBottles;
        while(emptyBottles>=numExchange){
            emptyBottles-=numExchange;
            emptyBottles+=1;
            bottlesDrunk+=1;
            numExchange+=1;        
        }
        return bottlesDrunk;
    }
}