#include <catch2/catch.hpp>

#include "Lib.h"

namespace {

TEST_CASE("Lib", "[lib]"){
    SECTION("Example"){
        lib::say_hello("World");
        CHECK(true);
    }
}

}