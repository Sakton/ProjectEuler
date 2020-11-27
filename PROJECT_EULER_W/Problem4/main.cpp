#include <iostream>
#include <vector>
/*
Число-палиндром с обеих сторон (справа налево и слева направо) читается одинаково.
Самое большое число-палиндром, полученное умножением двух двузначных чисел – 9009 = 91 × 99.
Найдите самый большой палиндром, полученный умножением двух трехзначных чисел.
*/

long palindrom( );
bool palindromValidate( long num );

int main( ) {
  // std::cout << std::boolalpha << palindromValidate( 9009 );
  std::cout << palindrom( );
}

long palindrom( ) {
  long start = 99;
  long stopt = 99;
  while ( !palindromValidate( stopt * start ) ) {
    --stopt;
    //--start;
  }
  std::cout << " start = " << start << " stop = " << stopt << std::endl;
  return stopt * start;
}

bool palindromValidate( long num ) {
  long res = 0;
  long t = num;
  while ( t ) {
    res = res * 10 + t % 10;
    t /= 10;
    // std::cout << "t = " << t << "  res = " << res << std::endl;
  }
  return res == num;
}
