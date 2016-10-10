//Generic class
// <COMPLETE
class GenericMethod <T> {
  private T t;

  public void add(T t) {
    this.t = t;
  }

  public T get() {
    return t;
  }

  // generic method printArray
  public static < E > void printArray( E[] inputArray ) {
    // Display array elements
    for(E element : inputArray) {
       System.out.printf("%s ", element);
    }
    System.out.println();
  }

  public static void main(String[] args) {
    GenericMethod<Integer> integerGeneric = new GenericMethod<Integer>();
    GenericMethod<String> stringGeneric = new GenericMethod<String>();

    integerGeneric.add(new Integer(10));
    stringGeneric.add(new String("hello"));


  }

}
