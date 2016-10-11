//Reverse a String asdfv -> vfdsa
//<untested>
//Solution 1: log(n) O(1)
//start on the edges of the string iterate swapping

class ReverseString {
  public String reverse(String word) {
    int i = 0;
    int j = word.length()
    String temp;
    while(i < j) {
      temp = word[i];
      word[i] = word[j];
      word[j] = word[i];
      i++;
      j--;
    }
    return word;
  }
  public static void main(String[] args) {

  }
}
