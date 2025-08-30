class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

    for (char c : ransomNote) {
        size_t pos = magazine.find(c);
        if (pos == string::npos) return false; // letter not found
        magazine.erase(pos, 1); // remove used letter
    }
    return true;

    }
};