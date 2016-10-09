import java.util.*;

public class Structures {

  public static void aStack() {
    Stack mystack = new Stack();
    mystack.push(new Integer(1));
    mystack.pop();
    mystack.isEmpty();
  }

  public static void arraylist() {

  }

  public static void hashTest() {
    //Map hm = new HashMap();//try not use this bc raw type
    //OR
    Map<String, Object> mymap = new HashMap<String, Object>();
    //insert object
    mymap.put("hello", new Double (34.34));
  }

  public static void Test() {

  }


  public static void main(String args[]) {
    hashTest();
  }
}
