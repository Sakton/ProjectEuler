#include <chrono>
#include <iostream>
#include <string>

// 23514624000

const std::string chislo(
    "73167176531330624919225119674426574742355349194934"
    "96983520312774506326239578318016984801869478851843"
    "85861560789112949495459501737958331952853208805511"
    "12540698747158523863050715693290963295227443043557"
    "66896648950445244523161731856403098711121722383113"
    "62229893423380308135336276614282806444486645238749"
    "30358907296290491560440772390713810515859307960866"
    "70172427121883998797908792274921901699720888093776"
    "65727333001053367881220235421809751254540594752243"
    "52584907711670556013604839586446706324415722155397"
    "53697817977846174064955149290862569321978468622482"
    "83972241375657056057490261407972968652414535100474"
    "82166370484403199890008895243450658541227588666881"
    "16427171479924442928230863465674813919123162824586"
    "17866458359124566529476545682848912883142607690042"
    "24219022671055626321111109370544217506941658960408"
    "07198403850962455444362981230987879927244284909188"
    "84580156166097919133875499200524063689912560717606"
    "05886116467109405077541002256983155200055935729725"
    "71636269561882670428252483600823257530420752963450" );

long long calculateSequence( std::string::size_type beg, std::string::size_type end );

int main( ) {
  using size_type = std::string::size_type;
  const int LEN = 13;
  long long max = 0;

  auto t0 = std::chrono::high_resolution_clock::now( );

  for ( size_type i = LEN; i < chislo.size( ); ++i ) {
    //    if ( chislo[ i ] == '0' ) {
    //      i += LEN + 1;
    //      if ( i > chislo.size( ) ) break;
    //      std::string sub = chislo.substr( i - LEN, LEN );
    //      std::string::size_type posNul = sub.rfind( '0' );
    //      if ( posNul != std::string::npos ) {
    //        std::cout << "posNul = " << posNul << "  " << chislo[ posNul ] << std::endl;
    //        i += ( 1 + LEN - posNul );
    //        if ( i > chislo.size( ) ) break;
    //      }
    //    }
    max = std::max( max, calculateSequence( i - LEN, i ) );
  }

  auto t1 = std::chrono::high_resolution_clock::now( );
  std::cout << std::chrono::duration_cast< std::chrono::microseconds >( t1 - t0 ).count( ) << std::endl;
  std::cout << max;
}

// 23514624000
long long calculateSequence( std::string::size_type beg, std::string::size_type end ) {
  long long res = 1;
  for ( std::string::size_type i = beg; i < end; ++i ) {
    if ( chislo[ i ] == '0' ) return 0;
    res *= chislo[ i ] - '0';
  }
  return res;
}

/*
auto t0 = std::chrono::high_resolution_clock::now();
std::cout << "Max : " << getMaxAdjproduct(13) << '\n';
auto t1 = std::chrono::high_resolution_clock::now();
std::cout << "Time(ms): " << std::chrono::duration_cast<std::chrono::milliseconds>(t1-t0).count() << '\n';
 * */
