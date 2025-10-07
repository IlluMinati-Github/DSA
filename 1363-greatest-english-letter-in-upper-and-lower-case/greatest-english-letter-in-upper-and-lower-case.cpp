class Solution {
public:
    string greatestLetter(string s) {
    unordered_set<char> lower, upper;
    
    for (char c : s) {
        if (islower(c)) lower.insert(c);
        else upper.insert(c);
    }
    
    char result = '\0';
    
    for (char c = 'A'; c <= 'Z'; ++c) {
        if (upper.count(c) && lower.count(c + 32)) { 
            result = c; 
        }
    }
    
    return result == '\0' ? "" : string(1, result);
}
};