class Solution {
public:
    int minimumLength(string s) {
        // Initialize two pointers, 'l' pointing to the start of the string and 'r' pointing to the end.
        int l = 0, r = s.length() - 1;
        // Continue the loop as long as characters at 'l' and 'r' are equal and 'l' is less than 'r'.
        while (s[l] == s[r] && l < r) {
            // Move 'l' to the right until a different character is encountered or 'l+1' reaches 'r'.
            while (s[l] == s[l + 1] && l + 1 < r)
                l++;
            // Move 'r' to the left until a different character is encountered or 'r-1' reaches 'l'.
            while (s[r] == s[r - 1] && l + 1 < r)
                r--;
            // If there are more characters between 'l' and 'r', move both pointers inward.
            if (l < r) {
                l++;
                r--;
            }
        }
        // Return the length of the remaining substring between 'l' and 'r'.
        return r - l + 1;
    }
};