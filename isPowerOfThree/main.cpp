#include <iostream>

using namespace std;

bool isPowerOfThree(int n) {
  for(int i = 0; i * i * i <= n; i++) {
      cout << i * i * i << endl;
      if((i * i * i)%n == 0 && (i * i * i) > 0)
          return true;
  }
  return false;
}

int main() {
    cout << "final" << isPowerOfThree(9) << endl;
    return 0;
}
