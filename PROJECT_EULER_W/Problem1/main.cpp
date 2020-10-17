#include <iostream>

// https://projecteuler.net/overview=001

const int TARGET = 999;

int Problem1( int num ) {
  int p = TARGET / num;
  return num * p * ( p + 1 ) / 2;
}

int main( ) {
  // Плохое решение
  //  int summ = 0;
  //  for ( int i = 3; i < 1000; ++i ) {
  //    if ( !( i % 3 ) || !( i % 5 ) ) summ += i;
  //  }
  //  std::cout << summ;
  std::cout << ( Problem1( 3 ) + Problem1( 5 ) - Problem1( 15 ) );
}
