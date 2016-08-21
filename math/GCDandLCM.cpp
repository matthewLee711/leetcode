//////////////////////////////////////
//Greatest common divisor (GCD) -- gcd of two numbers a and b is greatest number
//that divides evenly on both a and b

//Simple GCD solver
//math.min returns smaller of two int values (java)
for(int i=Math.min(a,b); i>=1; i--)
	if(a%i==0 && b%i==0)
		return i;

//Euclid's algorithm -- iterates over two numbers until remainder of 0 is found
//Expressing larger number in terms of smaller number plus remainder
//EX. 2336 = 1314 x 1 + 1022 ->  1314 = 1022 x 1 + 292 -> 1022 = 292 x 3 + 146
//finally: 292 = 146 x 2 + 0
//Recursive method -- pass larger number into a and smaller into b
int GCD(int a, int b) {
	if(b==0) return a;
	return GCD(b, a%b); //pass in smaller number and remainder until mod 0
}

//LCM -- least common multiple 6 and 9 is 18
int LCM(int a, int b){
	return b*a/GCD(a,b)
}

//Base converting break it down
//EX. 4325 stands for 5 + (2 x 10) + (3 x 10 x 10) + (4 x 10 x 10 x 10)
//EX. 1 + (1 x 2) + (0 x 2 x 2) + (1 x 2 x 2 x 2) = 1 + 2 + 8 = 11 binary: 1011

//convert n base number to decimal
int toDecimal(int n, int b){
	int result = 0;
	int multiplier = 1;
	while(n>0) {
		result += n%10*multiplier;
		multiplier*=b;
		n/=10;
	}
}

int main() {
  return 0;
}
//decimal to n base number
