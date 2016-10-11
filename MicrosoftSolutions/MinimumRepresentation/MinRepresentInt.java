// string of digits like "72388" and int n, delete n characters from the sting
// such the resulting string contains minimal number representation, you must
// preserve relative position of digits. Example: if st="72388" and n=2,
// the answer is 238.
//1255245
//6356326
//3456
//6367224
//Solution 1: O(log(n)) space: O(1)
//compare starting from edges
//this will preserve set digits

//what if generate any smallest number?
//solution 1:
//extract numbres and store them into an array.
//start from edges of both and delete number that is bigger
//once complete, convert array back to int
