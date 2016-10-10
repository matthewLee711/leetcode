import java.util.*;
// <COMPLETE>
//Grab each individual number from large number
class GrabIndividualInts {
  public static void main(String[] args) {
    Stack <Integer> holdNums = new Stack<Integer>();
    Iterator<Integer> iter = holdNums.iterator();

    int number = 16392;

    while(number > 0) {
      holdNums.push(number % 10);
      number = number / 10;
    }

    while (!holdNums.isEmpty()) {
      System.out.println(holdNums.pop());
    }

    //enhanced for loop
    // for(Integer eachNumIn : holdNums) {
    //   System.out.println(eachNumIn);
    // }

    //DONT USE REGULAR FOR LOOP ON STACK
    // for(int i = 0; i < holdNums.size(); i++) {
    //   System.out.println(holdNums.pop());
    // }
  }
}
