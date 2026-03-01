#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/where.hpp"

TEST_CASE("find character") {
    REQUIRE(where ("apple", 'a') == 0);
    REQUIRE(where ("apple", 'l') == 3);
    REQUIRE(where ("apple", 'b') == -1);
}
TEST_CASE("find substring") {
    REQUIRE(where ("apple", "le") == 3);
    REQUIRE(where ("apple", "pp") == 1);
    REQUIRE(where ("apple", "bb") == -1);
}