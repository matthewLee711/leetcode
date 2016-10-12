//write code to partition a linked likst around value such that all nodes less than x
//come before all nodes greater than or equal to x
// 11,9,22,41,5,7,8,10,3
// 3,5,7,8,9,10,11,22,41

//Solution 1: O(n) O(1)
// find where 10 is and store it.
// start from

//Solution 2: O(n) O(N)
//iterate through linked list and store each node in arraylist less than x
//and an array greater than x
//once done, ccreated new linked list which will insert less than x first
//and then greeater than x next

//Solution 3: O(n) O(n) CTCI
//create new linked list. One for less than x
// and one greater than x
