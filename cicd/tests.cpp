#define CATCH_CONFIG_MAIN
#if __has_include(<catch2/catch_all.hpp>)
    #include <catch2/catch_all.hpp>
#else
    #include <catch2/catch.hpp>
#endif
#include "../src/isPrime.h"



/*int main(int argc, char* argv[]) {
    Catch::Session session;
    int returnCode = session.applyCommandLine(argc, argv);
    if(returnCode != 0) {
        return returnCode;
    }
    return session.run();
}*/

TEST_CASE("Negative number", "[isPrime]"){
    REQUIRE(isPrime(-1) == false);
}

TEST_CASE("Zero", "[isPrime]"){
    REQUIRE(isPrime(0) == false);
}

TEST_CASE("One", "[isPrime]"){
    REQUIRE(isPrime(0) == false);
}

TEST_CASE("Not prime", "[isPrime]"){
    bool result = isPrime(4) || isPrime(50);
    REQUIRE(result == false);
}

TEST_CASE("Prime", "[isPrime]"){
    bool result = isPrime(2) && isPrime(3) && isPrime(29);
    REQUIRE(result == true);
}

/*void tests() {
    assert(isPrime(-1) == false);
    assert(isPrime(0) == false);
    assert(isPrime(1) == false);
    assert(isPrime(2) == true);
    assert(isPrime(3) == true);
    assert(isPrime(4) == false);
    assert(isPrime(29) == true);
    assert(isPrime(50) == false);

    std::cout << "Все тесты успешно пройдены!" << std::endl;
}*/
