// <INCOMPLETE
//make sure arrays are sorted
//merge both of them by comparing each element to each other into new arr

class MergeTwoArrs {

  int merge(int[] arr1, int[] arr2) {
    int[arr1.length + arr2.length] arrMerged;
    int i, j, mergedCounter = 0;
    while(i < arr1.length && j < arr2.length) {
      if(arr1[i] < arr2[j]) {
        arrMerged[mergedCounter++] = arr1[i++];
      }
      else {
        arrMerged[mergedCounter++] = arr2[j++];
      }
    }
    while(i < arr1.length)
      arrMerged[mergedCounter++] = arr1[i++];

    while(j < arr2.length)
      arrMerged[mergedCounter++] = arr2[j++];
  }

  public static void main(String[] args) {

  }
}
