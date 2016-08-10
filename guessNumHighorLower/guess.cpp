// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guess;
    Solution() {
        guess = 0;
    }
    int guessNumber(int n) {
        if(guess > n) {
            return guessNumber(n - 1);
        }
        else if(guess < n) {
            return guessNumber(n + 1);
        }
        else {
            return n;
        }
    }
};
