class MergeSort {
  //http://www.vogella.com/tutorials/JavaAlgorithmsMergesort/article.html
  private int[] numbers;
  private int[] helper;

  private int number;

  public void sort(int[] values) {
          this.numbers = values;
          number = values.length;
          this.helper = new int[number];
          split(0, number - 1);
  }


  public void split(int low, int high) {

    if(low < high) {
      int middle = low + (high - low) / 2;
      System.out.println("Split low to mid " + low + " " + middle);
      split(low, middle);
      System.out.println("Split mid to high "+ middle + " " + high);
      split(middle + 1, high);
      System.out.println("merge all " + low + " " + middle + " " + high);
      merge(low, middle, high);
    }
  }

  public void merge(int low, int middle, int high) {
    //slowly combine each split into one array
    // Copy both parts into the helper array
    for (int i = low; i <= high; i++) {
      helper[i] = numbers[i];
    }

    int i = low;
    int j = middle + 1;
    int k = low;
    // Copy the smallest values from either the left or the right side back
    // to the original array
    while (i <= middle && j <= high) {
      if (helper[i] <= helper[j]) {
        numbers[k] = helper[i];
        i++;
      } else {
        numbers[k] = helper[j];
        j++;
      }
      k++;
    }
    // Copy the rest of the left side of the array into the target array
    while (i <= middle) {
      numbers[k] = helper[i];
      k++;
      i++;
    }
  }

  public static void main(String args[]) {
    MergeSort test = new MergeSort();
    int[] arr = {4, 8, 5, 7, 3, 9, 10};
    //test.split(0, 7 - 1);
    test.sort(arr);
    System.out.println("works");
  }
}
