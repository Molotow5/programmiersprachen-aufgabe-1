#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int gcd(int a, int b){
  if (a == b){
    return a;
  }
  if (a < b){
    int hilfs = a;
    a = b;
    b = hilfs;
  }
  int c = a % b;
  if (c == 0){
    return b;
  } else
  {
    return gcd(b, c);
  }
}

TEST_CASE("describe_gcd", "[gcd]"){
  REQUIRE(gcd(2,4) == 2);
  REQUIRE(gcd(9,6) == 3);
  REQUIRE(gcd(3,7) == 1);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
//int Ergebnis = gcd(37,12);
//std::cout << "Der biggeste gemeinsame Teiler: " << Ergebnis << "\n";
}
