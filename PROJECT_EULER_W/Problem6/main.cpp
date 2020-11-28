#include <cstdint>
#include <iostream>

int64_t fun( int64_t n );

int main( ) { std::cout << fun( 100 ); }

int64_t fun( int64_t n ) { return std::abs( ( n * ( n + 1 ) * ( 2 * n + 1 ) / 6 ) - ( ( n * ( n + 1 ) / 2 ) * ( n * ( n + 1 ) / 2 ) ) ); }
