class Solution {
    public boolean Solve(int s_size, int t_size, String s, String t){
        if(s_size==0) return true;
        if(t_size==0) return false;
        if(s.charAt(s_size-1)==t.charAt(t_size-1)){
            return Solve(s_size-1,t_size-1,s,t);
        }
        else return Solve(s_size,t_size-1,s,t);
    }
    public boolean isSubsequence(String s, String t) {
        int s_size = s.length();
        int t_size = t.length();
        return Solve(s_size,t_size,s,t);
    }
}