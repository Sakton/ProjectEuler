#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
/*
Простые делители числа 13195 - это 5, 7, 13 и 29.
Каков самый большой делитель числа 600851475143, являющийся простым числом?
6857
*/

long greatestDivisor( long long num );

int main( ) { std::cout << greatestDivisor( 600851475143 ); }

//в лоб
long greatestDivisor( long long num ) {
  int root = std::sqrt( num );
  std::vector< long > dividers;
  int i = 2;
  while ( num && i <= root ) {
    if ( num % i == 0 ) {
      dividers.push_back( i );
      while ( num && num % i == 0 ) {
        num /= i;
      }
    } else {
      ++i;
    }
  }
  return *std::max_element( dividers.cbegin( ), dividers.cend( ) );
}
