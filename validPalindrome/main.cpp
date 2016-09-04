//solution works, but leetcode doesnt work
class Solution {
public:
    bool isPalindrome(string s) {
        //abacaba
        //left and right side. compare each till reach middle
        int left = 0;
        int right = s.length() - 1;
        //compare
        while(left < right) {
            if(s[left] != s[right]) {
                cout << s[left] << "and" << s[right] << endl;
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
