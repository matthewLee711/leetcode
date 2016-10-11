import java.util.*;

//Fibonacci is starting from a number and adding the previous number to it
class Fibonacci {
  //Regular Recursive fibonacci
  int fibonacci(int number) {
    if(number == 0 || number == 1) {
      return number;
    }
    else {
      return fibonacci(number - 1) + fibonacci(number - 2);
    }
  }

  //Dynamic approach fibonacci
  public Map <Integer, Integer> cache = new HashMap <Integer, Integer>();
  int fibonacciDynamic(int n) {
    if(n == 0 || n == 1) {
      return n;
    }
    //Use cache to return int already used
    if(cache.find(n) != 0) {
      return cache.find(n);
    }
    //perform fibonacci, except store in cache after first use.
    //EX. fib 5 stored -> fib 4 stored. when do fib 6, will access + use fib 5
    int store = fibonacciDynamic(n - 1) + fibonacciDynamic(n - 2);
    cache.insert(store, store);
  }

  public static void main(String[] args) {

  }
}
