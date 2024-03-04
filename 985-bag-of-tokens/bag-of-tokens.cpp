#include <algorithm>
#include <vector>

class Solution {
public:
    int bagOfTokensScore(std::vector<int>& tokens, int power) {
        // Step 1: Sort the tokens in ascending order
        sort(tokens.begin(), tokens.end());

        // Initialize pointers and counters
        int r = tokens.size() - 1;  // Right pointer at the end of sorted tokens
        int l = 0;                  // Left pointer at the beginning of sorted tokens
        int score = 0;              // Current score during the game
        int ans = 0;                // Maximum score achieved

        // Step 2: Play the game until the left pointer surpasses the right pointer
        while (l <= r) {
            // Try to use the smallest token by spending power
            if (power >= tokens[l]) {
                power -= tokens[l];
                score++;  // Increase the score
                l++;      // Move the left pointer to the right
            } else if (score > 0) {
                // If unable to use the smallest token, try to gain power
                power += tokens[r];
                r--;       // Move the right pointer to the left
                score--;   // Decrease the score
            } else {
                // Break the loop if unable to proceed
                break;
            }

            // Update the maximum score achieved so far
            ans = std::max(ans, score);
        }

        // Step 3: Return the maximum score achieved
        return ans;
    }
};
