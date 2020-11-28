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
  long pal = 0;
  long start = 0;
  long stop = 0;
  for ( long i = 100; i <= 999; ++i ) {
    for ( long j = 100; j <= 999; ++j ) {
      if ( palindromValidate( i * j ) ) {
        pal = std::max( i * j, pal );
        start = i;
        stop = j;
      }
    }
  }
  std::cout << " start = " << start << " stop = " << stop << std::endl;
  return pal;
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
