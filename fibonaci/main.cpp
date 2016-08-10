int fibonacciRecursive(int number) {
  if(number == 0 || number == 1) {
    return number;
  }
  else {
    return fibonacci(number - 1) + fibonacci(number - 2);
  }
}

void fibonacciIterative(int number) {

}

int main() {
  fibonacciRecursive(10);
  fibonacciIterative(10);
  return 0;
}
