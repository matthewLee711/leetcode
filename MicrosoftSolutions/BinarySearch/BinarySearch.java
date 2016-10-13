//binary serach can be used for both arrays and matrixes
//search if number is in array
class BinarySearch {
  void binarySearch(int[] arr, int search) {
    int first = 0;
    int last = arr.length;
    while(first <= last) {
      int middle = (first + last) / 2;
      if(data[middle] == search) {
        //found it!
      }
      else if(data[middle] < search) {
        last = middle + 1;
      }
      else {
        first = middle - 1;
      }
    }

  }

  public static void main(String[]) {

  }
}
