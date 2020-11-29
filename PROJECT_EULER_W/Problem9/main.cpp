#include <iostream>

int main( ) {
  long a = 0;
  long b = 0;
  long c = 0;
  int n = 1;
  while ( ( a + b + c ) == 1000 && ( a * a + b * b == c * c ) ) {
    //    a = 2 * n + 1;
    //    b = 2 * n * ( n + 1 );
    //    c = 2 * n * ( n + 1 ) + 1;
    //    ++n;
  }
  std::cout << "n = " << n << std::endl;
  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
  std::cout << "c = " << c << std::endl;
  std::cout << "a + b + c = " << a + b + c << std::endl;
  std::cout << a * b * c;
}
