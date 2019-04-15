#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int factorial(int zahl){
    int ergebnis;
    if (zahl <= 0){
        ergebnis = 0;
    } else {
        ergebnis = 1;
    }
    if (zahl > 0){
        for (int i = 1; i < 1+zahl; ++i){
            ergebnis = ergebnis * i;
        }
    } 
    /*
    else {
        for (int j = -1; j > zahl-1; j--){
            ergebnis = ergebnis * j;
        }
    }
    */
    return ergebnis;
}

TEST_CASE("describe_factorial", "[factorial]"){
    REQUIRE( factorial(5) == 120);
    REQUIRE( factorial(8) == 40320);
    REQUIRE( factorial(0) == 0);
    //REQUIRE( factorial(-11) == -39916800);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
