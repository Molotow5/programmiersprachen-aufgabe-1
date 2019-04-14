#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

double mile_to_kilometer(double miles){
    double kilometer = miles * 1.60934;
    return kilometer;
}

TEST_CASE("describe_mile_to_kilometer", "[mile_to_kilometer]"){
    REQUIRE(Approx(mile_to_kilometer(1)) == 1.60934 );
    REQUIRE(Approx(mile_to_kilometer(30)) == 48.2803 );
    REQUIRE(Approx(mile_to_kilometer(3500)) == 5632.704 );
    REQUIRE(Approx(mile_to_kilometer(0)) == 0);
    REQUIRE(Approx(mile_to_kilometer(-30)) == -48.2803);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
