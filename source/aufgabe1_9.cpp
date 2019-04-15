#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int checksum(int zahl){
  if (zahl == 0){
    return 0;
  }
  bool checklength = true;
  int sum = 0;
  while(checklength){
    sum = sum + zahl % 10;
    zahl = zahl / 10;
    if (zahl == 0){
      return sum;
    }
  }
}

TEST_CASE("describe_checksum", "[checksum]"){
  REQUIRE(checksum(0) == 0);
  REQUIRE(checksum(1) == 1);
  REQUIRE(checksum(119606) == 23);
  REQUIRE(checksum(-333) == -9);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
