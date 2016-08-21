//Primes - a number is only divisible by one and itself 2, 3, 5, 79, 1931
//EX.
for(int i = 2; i <n; i++)
	if(n%i==0) return false;

return true;

//fast single prime solver
bool isPrime(int n) {
	if(n <= 1) return false; // anything less than or equal to 1 is not prime
	if(n == 2) return true; // only even prime
	if(n%2==0) return false; //no even prime number greater than 2

	//take square root of prime number bc a multiple of a prime
	//exists before a square root of it. Ex. 21 -> 4.5->5 3 is multiple
	int m=Math.sqrt(n);
	//for loop goes through multiples -- start at 3 bc divide by 2 == not prime
	//can increment by two -- no even prime greater than 2
	for(int i=3; i<=m; i+=2)
		if(n%i==0)
			return false;
}

//Fast print out all prime
//Sieve of eratosthenes - generates all primes from 2 to a given number
//Faster than using method above bc would have to call for loop
//How it works: All numbers are removed based on multiples
public boolean[] sieve(int n)
{
   //dynamically allocate array -- need to add 1 bc 0 not a prime
   boolean[] prime=new boolean[n+1];
   Arrays.fill(prime,true);//fill all to prime
   //these are not prime
   prime[0]=false;
   prime[1]=false;
   //retrieve possible multiples from set
   int m=Math.sqrt(n);
   //finds next prime
   for (int i=2; i<=m; i++)
      if (prime[i])
      	//removes all multiples of current prime
         for (int k=i*i; k<=n; k+=i)
            prime[k]=false;

   return prime;
}
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

//Euclid's algorithm can solve linear Diophatine eqs


//GEOMETRY -- find area of intersection of rectangles
//B = # of lattice points on the boundary of the polygon
//I = # of lattice point in interior of polygon
//Pick's theorm
// Area = B/2 + I - 1

////not needed---
//Euler's forumla for polygonal nets
//polygonal nets -- simple polygon divided into smaller polygons.
//faces -- smaller ppoly gons
//edges--sides of faces
//vertices -- verticies of faces
///not needed---

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

//decimal to n base number
