class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> cnt(128);
        for (char c: magazine) ++cnt[c];
        for (char c: ransomNote) {
            if (cnt[c] <= 0) return false;
            --cnt[c];
        }
        return true;
    }
};