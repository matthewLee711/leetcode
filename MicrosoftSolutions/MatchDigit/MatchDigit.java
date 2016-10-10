// Given two integers, return the numbers of matched digit number.
// For ex, 130 and 239, return 1. 29 and 92, return 0
import java.util.*;
// <HAVENT TEST>
class MatchDigit {
  Map<int, int> numCompare = new HashMap<int, int>();
  public void insertHashMap(int number) {
    while( number > 0) {
      numCompare.insert(number % 10, number % 10);
      number = number / 10;
    }
  }

  public int matchNum(int num1, int num2) {
    insertHashMap(num1);

    while(num2 > 0) {
      if(numCompare.find(num2 % 10)) {
        System.out.println(num2 % 10);
        return 1;
      }
      num2 = num2 / 10;
    }
    return 0;
  }
  public static void main(String[] args) {

  }
}
