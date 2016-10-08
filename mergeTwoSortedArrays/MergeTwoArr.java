class MergeTwoArr {

  //Simple method
  public void merge(int arr1[], int arr2[], int arrSize) {
    int count1 = 0;
    int count2 = 0;
    int countMerge = 0;
    int[] arrMerge = new int[arrSize];
    //countMerge < arr1.length && countMerge arr2.length
    while(true) {
      if(arr1[count1] < arr2[count2]) {
        arrMerge[countMerge] = arr1[count1];
        count1++;
        countMerge++;
      }
      else if(arr1[count1] > arr2[count2]) {
        arrMerge[countMerge] = arr2[count2];
        count2++;
        countMerge++;
      }
      else {
        arrMerge[countMerge] = arr1[count1];
        countMerge++;
        count1++;
        arrMerge[countMerge] = arr2[count2];
        countMerge++;
        count2++;
      }
    }
  }

  //condensed
  public void merge2(int[] arr1, int[] arr2) {
    int[] mergedArray = new int[arr1.length + arr2.length];
    int arr1Index = 0, arr2Index = 0, mergedArrayIndex = 0;

    while(arr1Index < arr1.length && arr2Index < arr2.length) {
      if(arr1[arr1Index] < arr2[arr2Index])
        mergedArray[mergedArrayIndex++] = arr1[arr1Index++];
      else
        mergedArray[mergedArrayIndex++] = arr2[arr2Index++];
    }
    System.out.println(arr1Index);
    System.out.println(arr2Index);
    System.out.println("-------------");
    //inserts any stragglers
    while (arr1Index < arr1.length)
      mergedArray[mergedArrayIndex++] = arr1[arr1Index++];

    while (arr2Index < arr2.length)
      mergedArray[mergedArrayIndex++] = arr2[arr2Index++];

    for(int i = 0; i < mergedArray.length; ++i) {
      System.out.println(mergedArray[i]);
    }
  }

  public static void main(String args[]) {
    MergeTwoArr merging = new MergeTwoArr();
    int[] arr1 = {1, 4, 7, 12};
    int[] arr2 = {3, 6, 9, 10};
    int arrSize = arr1.length + arr2.length;
    //simple merge
    //merging.merge(arr1, arr2, arrSize);
    //condensed merge
    merging.merge2(arr1, arr2);
  }
}
