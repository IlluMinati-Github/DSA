class Solution {
    public int[] avoidFlood(int[] rains) {
        int n = rains.length;
        int[] result = new int[n];
        Arrays.fill(result, 1);
        
        HashMap<Integer, Integer> full = new HashMap<>(); 
        TreeSet<Integer> dryDays = new TreeSet<>();      
        
        for (int i = 0; i < n; i++) {
            int lake = rains[i];
            
            if (lake == 0) {
                dryDays.add(i); 
            } else {
                result[i] = -1; 
                
                if (full.containsKey(lake)) {
                    Integer dryDay = dryDays.higher(full.get(lake));
                    if (dryDay == null) {
                        return new int[0]; 
                    }
                    
                    result[dryDay] = lake; 
                    dryDays.remove(dryDay); 
                }
                
                full.put(lake, i); 
            }
        }
        
        return result;
    }
}
