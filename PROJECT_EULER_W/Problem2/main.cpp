#include <iostream>

//ХАХА
/*
Каждое третье число у фибоначчи - четное!!!!
https://projecteuler.net/overview=002
*/

int main( ) {
  /*
    int f_2 = 1;
    int f_1 = 1;
    int f = 0;
    int64_t summ = 0;
    while ( f < 4000000 ) {
      f_2 = f_1;
      f_1 = f;
      f = f_1 + f_2;
      if ( !( f % 2 ) ) {
        summ += f;
      }
    }
    // 4613732
    std::cout << summ;
  */

  //ЗДОРОВО
  int a = 1;
  int b = 1;
  int c = a + b;
  int64_t summ = 0;
  while ( c < 4000000 ) {
    summ += c;
    a = b + c;
    b = c + a;
    c = a + b;
  }
  // 4613732
  std::cout << summ;
}
