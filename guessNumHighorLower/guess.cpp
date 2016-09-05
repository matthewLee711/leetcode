// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

/*
1.Let min = 0 and max = n-1.
2.Compute guess as the average of max and min, rounded down (so that it is an integer).
3.If array[guess] equals target, then stop. You found it! Return guess.
4.If the guess was too low, that is, array[guess] < target, then set min = guess + 1.
5.Otherwise, the guess was too high. Set max = guess - 1.
6.Go back to step 2.
*/

//binary search example when needed
class Solution {
public:
    int guesser(int m) {
      int low = 1;
      int high = m;
      while(low <= high) {
        int mid = low + (high - low) / 2;
        int res = guess(mid);
        if(res == 0) {
          return mid;
        }
        else if(res == -1) {
            high = mid + 1;
        }
        else {
            low = mid - 1;
        }
      }
    }
};
