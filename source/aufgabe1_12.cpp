#define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES
#include <catch.hpp>
#include <cmath>

double zylinder_Vol(double height, double radius){
    if (height < 0 || radius < 0){
        return 0;
    }
    double pi = M_PI;
    double volume = radius * radius * pi * height;
    return volume;
}

double zylinder_Ao(double height, double radius){
        if (height < 0 || radius < 0){
        return 0;
    }
    double pi = M_PI;
    double surface = (radius * radius * pi) * 2 + (radius * 2 * pi) * height;
    return surface;
}

TEST_CASE("describe_zylinder_Vol&Ao", "[zylinder_Vol&Ao]"){
    REQUIRE(Approx(zylinder_Vol(25, 5)) == 1963.5);
    REQUIRE(Approx(zylinder_Vol(10, 15)).epsilon(0.01) == 7069.58);
    REQUIRE(Approx(zylinder_Ao(25, 5)) == 942.48);
    REQUIRE(Approx(zylinder_Ao(10, 15)).epsilon(0.01) == 2356.19);
    REQUIRE(zylinder_Vol(-5, 30) == 0);
    REQUIRE(zylinder_Ao(20, -1) == 0);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}