#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

double fract(double zahl){
    if (zahl < 1 && zahl > -1){
        return zahl;
    }
    int vorKommaAnteil = zahl;
    return zahl - vorKommaAnteil;
}

TEST_CASE("describe_fract", "[fract]"){
    REQUIRE(0.5 == Approx(fract(2.5)));
    REQUIRE(Approx(0.2) == 0.2);
    REQUIRE(Approx(fract(-24.245)) == -0.245);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
