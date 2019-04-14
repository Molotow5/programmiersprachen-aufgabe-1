#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

bool is_prime(int zahl){
    if (zahl <= 1){
        return false;
    }
    bool primecheck = true;
    for (int i = 2; i < zahl/2; ++i){
        if (zahl % i != 0){
            primecheck = false;
            break;
        }
    }
}

TEST_CASE("describe_gcd", "[gcd]"){
    REQUIRE(is_prime(1) == false);
    REQUIRE(is_prime(2) == true);
    REQUIRE(is_prime(-13) == false);
    REQUIRE(is_prime(13) == true);
    REQUIRE(is_prime(47) == true);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
