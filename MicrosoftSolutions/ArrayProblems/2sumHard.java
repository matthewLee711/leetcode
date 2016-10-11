// Given an array of intergers, find two numbers such that they add up to a specific
// target number. The function twoSum should return indices of the two numbers such
// that they add up to the target, where index1 must be less than index2 Please
// note that your returned answers (both index1 and index2) are not zero-based.
//
// You may assume that each input would have exactly one solution.
//
// Input: numbers={2, 7, 11, 15}, target=9 Output: index1=1, index2=2

//Solution 1: O(n) linear scan to insert and compare. size: O(n)
//put all numbers in a hash table
//add numbers from arr to hash

//Solution 2: O(n^2)
//for loop in for loop
//each element is added with each element

//solution 3: nlog(n)
//sort all the numbers
//add each one
//if sum exceeds total, move up
