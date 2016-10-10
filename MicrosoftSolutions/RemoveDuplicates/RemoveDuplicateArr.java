import java.utils.*;
class RemoveDuplicateArr {
  // <INCOMPLETE>
  public static void main(String[] args) {
    Map <Integer, Integer> store = new HashMap<Integer, Integer>();
    int[] data = {1,2,3,4,6,6,7};
    //array has to be sorted for this to work!
    int j = 1;
    for(int i = 0; i < data.length; i++) {
      if(data[i] == data[j]) {
        //duplicate
      }
      j++;
    }
  }
}
