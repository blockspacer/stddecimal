#include <catch.hpp>
#include <libdecimal/decimal.hpp>

using namespace std::decimal;

TEST_CASE("decimal32", "decimal32") 
{
    SECTION("constructors")
    {
       // REQUIRE(static_cast<long long>(decimal32()) == 0);


        // explicit decimal32(decimal64 d64);
        // explicit decimal32(decimal128 d128);
        // explicit decimal32(float r);
        // explicit decimal32(double r); 
        // explicit decimal32(long double r);

        // // 3.2.2.3 conversion from integral type: 
        // explicit decimal32(int z);
        // REQUIRE(static_cast<long long>(decimal32(0)) == 0);
        // REQUIRE(static_cast<long long>(decimal32(1)) == 1);
        // REQUIRE(static_cast<long long>(decimal32(std::numeric_limits<int>::min())) == -2147483648);
        // REQUIRE(static_cast<long long>(decimal32(std::numeric_limits<int>::max())) == 2147483647);

        // REQUIRE(static_cast<long long>(decimal32(std::numeric_limits<unsigned int>::min())) == 0);
        // REQUIRE(static_cast<long long>(decimal32(std::numeric_limits<unsigned int>::max())) == 4294967296);

        // explicit decimal32(unsigned int z);
        // explicit decimal32(long z);
        // explicit decimal32(unsigned long z); 
        // explicit decimal32(long long z); 
        // explicit decimal32(unsigned long long z);
        
        // // 3.2.2.4 conversion to integral type: 
        // explicit operator long long() const;   
    
    }

    SECTION("makers")
    {
        // decimal32 make_decimal32(long long coeff, int exponent); 
        // decimal32 make_decimal32(unsigned long long coeff, int exponent);
    }

    SECTION("binary addition")
    {
        decimal32(0) + decimal32(0);
        decimal32(0) + decimal64(0);
        decimal32(0) + decimal128(0);

        decimal64(0) + decimal32(0);
        decimal64(0) + decimal64(0);
        decimal64(0) + decimal128(0);

        decimal128(0) + decimal32(0);
        decimal128(0) + decimal64(0);
        decimal128(0) + decimal128(0);

        decimal32(0) + 0;
        decimal32(0) + 0u;
        decimal32(0) + 0l;
        decimal32(0) + 0lu;
        decimal32(0) + 0ll;
        decimal32(0) + 0llu;

        0 + decimal32(0);
        0u + decimal32(0);
        0l + decimal32(0);
        0lu + decimal32(0);
        0ll + decimal32(0);
        0llu + decimal32(0);

        decimal64(0) + 0;
        decimal64(0) + 0u;
        decimal64(0) + 0l;
        decimal64(0) + 0lu;
        decimal64(0) + 0ll;
        decimal64(0) + 0llu;

        0 + decimal64(0);
        0u + decimal64(0);
        0l + decimal64(0);
        0lu + decimal64(0);
        0ll + decimal64(0);
        0llu + decimal64(0);

        decimal128(0) + 0;
        decimal128(0) + 0u;
        decimal128(0) + 0l;
        decimal128(0) + 0lu;
        decimal128(0) + 0ll;
        decimal128(0) + 0llu;

        0 + decimal128(0);
        0u + decimal128(0);
        0l + decimal128(0);
        0lu + decimal128(0);
        0ll + decimal128(0);
        0llu + decimal128(0);
    }

    SECTION("binary subtraction")
    {
        decimal32(0) - decimal32(0);
        decimal32(0) - decimal64(0);
        decimal32(0) - decimal128(0);

        decimal64(0) - decimal32(0);
        decimal64(0) - decimal64(0);
        decimal64(0) - decimal128(0);
        
        decimal128(0) - decimal32(0);
        decimal128(0) - decimal64(0);
        decimal128(0) - decimal128(0);

        decimal32(0) - 0;
        decimal32(0) - 0u;
        decimal32(0) - 0l;
        decimal32(0) - 0lu;
        decimal32(0) - 0ll;
        decimal32(0) - 0llu;

        0 - decimal32(0);
        0u - decimal32(0);
        0l - decimal32(0);
        0lu - decimal32(0);
        0ll - decimal32(0);
        0llu - decimal32(0);

        decimal64(0) - 0;
        decimal64(0) - 0u;
        decimal64(0) - 0l;
        decimal64(0) - 0lu;
        decimal64(0) - 0ll;
        decimal64(0) - 0llu;

        0 - decimal64(0);
        0u - decimal64(0);
        0l - decimal64(0);
        0lu - decimal64(0);
        0ll - decimal64(0);
        0llu - decimal64(0);

        decimal128(0) - 0;
        decimal128(0) - 0u;
        decimal128(0) - 0l;
        decimal128(0) - 0lu;
        decimal128(0) - 0ll;
        decimal128(0) - 0llu;

        0 - decimal128(0);
        0u - decimal128(0);
        0l - decimal128(0);
        0lu - decimal128(0);
        0ll - decimal128(0);
        0llu - decimal128(0);
    }

    SECTION("binary multiplication")
    {
        decimal32(0) * decimal32(0);
        decimal32(0) * decimal64(0);
        decimal32(0) * decimal128(0);

        decimal64(0) * decimal32(0);
        decimal64(0) * decimal64(0);
        decimal64(0) * decimal128(0);
        
        decimal128(0) * decimal32(0);
        decimal128(0) * decimal64(0);
        decimal128(0) * decimal128(0);
    
        decimal32(0) * 0;
        decimal32(0) * 0u;
        decimal32(0) * 0l;
        decimal32(0) * 0lu;
        decimal32(0) * 0ll;
        decimal32(0) * 0llu;

        0 * decimal32(0);
        0u * decimal32(0);
        0l * decimal32(0);
        0lu * decimal32(0);
        0ll * decimal32(0);
        0llu * decimal32(0);

        decimal64(0) * 0;
        decimal64(0) * 0u;
        decimal64(0) * 0l;
        decimal64(0) * 0lu;
        decimal64(0) * 0ll;
        decimal64(0) * 0llu;

        0 * decimal64(0);
        0u * decimal64(0);
        0l * decimal64(0);
        0lu * decimal64(0);
        0ll * decimal64(0);
        0llu * decimal64(0);

        decimal128(0) * 0;
        decimal128(0) * 0u;
        decimal128(0) * 0l;
        decimal128(0) * 0lu;
        decimal128(0) * 0ll;
        decimal128(0) * 0llu;

        0 * decimal128(0);
        0u * decimal128(0);
        0l * decimal128(0);
        0lu * decimal128(0);
        0ll * decimal128(0);
        0llu * decimal128(0);
    
    }

    SECTION("binary division")
    {
        decimal32(0) / decimal32(0);
        decimal32(0) / decimal64(0);
        decimal32(0) / decimal128(0);

        decimal64(0) / decimal32(0);
        decimal64(0) / decimal64(0);
        decimal64(0) / decimal128(0);
        
        decimal128(0) / decimal32(0);
        decimal128(0) / decimal64(0);
        decimal128(0) / decimal128(0);

        decimal32(0) / 0;
        decimal32(0) / 0u;
        decimal32(0) / 0l;
        decimal32(0) / 0lu;
        decimal32(0) / 0ll;
        decimal32(0) / 0llu;

        0 / decimal32(0);
        0u / decimal32(0);
        0l / decimal32(0);
        0lu / decimal32(0);
        0ll / decimal32(0);
        0llu / decimal32(0);

        decimal64(0) / 0;
        decimal64(0) / 0u;
        decimal64(0) / 0l;
        decimal64(0) / 0lu;
        decimal64(0) / 0ll;
        decimal64(0) / 0llu;

        0 / decimal64(0);
        0u / decimal64(0);
        0l / decimal64(0);
        0lu / decimal64(0);
        0ll / decimal64(0);
        0llu / decimal64(0);

        decimal128(0) / 0;
        decimal128(0) / 0u;
        decimal128(0) / 0l;
        decimal128(0) / 0lu;
        decimal128(0) / 0ll;
        decimal128(0) / 0llu;

        0 / decimal128(0);
        0u / decimal128(0);
        0l / decimal128(0);
        0lu / decimal128(0);
        0ll / decimal128(0);
        0llu / decimal128(0);
    }

    SECTION("binary equal")
    {
        REQUIRE(decimal32(0) == decimal32(0));
        REQUIRE(decimal32(0) == decimal64(0));
        // REQUIRE(decimal32(0) == decimal128(0));

        REQUIRE(decimal64(0) == decimal32(0));
        REQUIRE(decimal64(0) == decimal64(0));
        // REQUIRE(decimal64(0) == decimal128(0));
        
        // REQUIRE(decimal128(0) == decimal32(0));
        // REQUIRE(decimal128(0) == decimal64(0));
        // REQUIRE(decimal128(0) == decimal128(0));

        REQUIRE(decimal32(0) == 0);
        REQUIRE(decimal32(0) == 0u);
        REQUIRE(decimal32(0) == 0l);
        REQUIRE(decimal32(0) == 0lu);
        REQUIRE(decimal32(0) == 0ll);
        REQUIRE(decimal32(0) == 0llu);

        REQUIRE(0 == decimal32(0));
        REQUIRE(0u == decimal32(0));
        REQUIRE(0l == decimal32(0));
        REQUIRE(0lu == decimal32(0));
        REQUIRE(0ll == decimal32(0));
        REQUIRE(0llu == decimal32(0));

        REQUIRE(decimal64(0) == 0);
        REQUIRE(decimal64(0) == 0u);
        REQUIRE(decimal64(0) == 0l);
        REQUIRE(decimal64(0) == 0lu);
        REQUIRE(decimal64(0) == 0ll);
        REQUIRE(decimal64(0) == 0llu);

        REQUIRE(0 == decimal64(0));
        REQUIRE(0u == decimal64(0));
        REQUIRE(0l == decimal64(0));
        REQUIRE(0lu == decimal64(0));
        REQUIRE(0ll == decimal64(0));
        REQUIRE(0llu == decimal64(0));

        // REQUIRE(decimal128(0) == 0);
        // REQUIRE(decimal128(0) == 0u);
        // REQUIRE(decimal128(0) == 0l);
        // REQUIRE(decimal128(0) == 0lu);
        // REQUIRE(decimal128(0) == 0ll);
        // REQUIRE(decimal128(0) == 0llu);

        // REQUIRE(0 == decimal128(0));
        // REQUIRE(0u == decimal128(0));
        // REQUIRE(0l == decimal128(0));
        // REQUIRE(0lu == decimal128(0));
        // REQUIRE(0ll == decimal128(0));
        // REQUIRE(0llu == decimal128(0));
    }

    SECTION("binary not equal")
    {
        REQUIRE(decimal32(0) != decimal32(1));
        REQUIRE(decimal32(0) != decimal64(1));
        // REQUIRE(decimal32(0) != decimal128(1));

        REQUIRE(decimal64(0) != decimal32(1));
        REQUIRE(decimal64(0) != decimal64(1));
        // REQUIRE(decimal64(0) != decimal128(1));
        
        // REQUIRE(decimal128(0) != decimal32(1));
        // REQUIRE(decimal128(0) != decimal64(1));
        // REQUIRE(decimal128(0) != decimal128(1));

        REQUIRE(decimal32(0) != 1);
        REQUIRE(decimal32(0) != 1u);
        REQUIRE(decimal32(0) != 1l);
        REQUIRE(decimal32(0) != 1lu);
        // REQUIRE(decimal32(0) != 1ll);
        // REQUIRE(decimal32(0) != 1llu);

        REQUIRE(0 != decimal32(1));
        REQUIRE(0u != decimal32(1));
        REQUIRE(0l != decimal32(1));
        REQUIRE(0lu != decimal32(1));
        // REQUIRE(0ll != decimal32(1));
        // REQUIRE(0llu != decimal32(1));

        REQUIRE(decimal64(0) != 1);
        REQUIRE(decimal64(0) != 1u);
        REQUIRE(decimal64(0) != 1l);
        REQUIRE(decimal64(0) != 1lu);
        // REQUIRE(decimal64(0) != 1ll);
        // REQUIRE(decimal64(0) != 1llu);

        REQUIRE(0 != decimal64(1));
        REQUIRE(0u != decimal64(1));
        REQUIRE(0l != decimal64(1));
        REQUIRE(0lu != decimal64(1));
        // REQUIRE(0ll != decimal64(1));
        // REQUIRE(0llu != decimal64(1));

        // REQUIRE(decimal128(0) != 1);
        // REQUIRE(decimal128(0) != 1u);
        // REQUIRE(decimal128(0) != 1l);
        // REQUIRE(decimal128(0) != 1lu);
        // REQUIRE(decimal128(0) != 1ll);
        // REQUIRE(decimal128(0) != 1llu);

        // REQUIRE(0 != decimal128(1));
        // REQUIRE(0u != decimal128(1));
        // REQUIRE(0l != decimal128(1));
        // REQUIRE(0lu != decimal128(1));
        // REQUIRE(0ll != decimal128(1));
        // REQUIRE(0llu != decimal128(1));
    }

    SECTION("binary less")
    {
        REQUIRE(decimal32(0) < decimal32(1));
        REQUIRE(decimal32(0) < decimal64(1));
        // REQUIRE(decimal32(0) < decimal128(1));

        REQUIRE(decimal64(0) < decimal32(1));
        REQUIRE(decimal64(0) < decimal64(1));
        // REQUIRE(decimal64(0) < decimal128(1));
        
        // REQUIRE(decimal128(0) < decimal32(1));
        // REQUIRE(decimal128(0) < decimal64(1));
        // REQUIRE(decimal128(0) < decimal128(1));

        REQUIRE(decimal32(0) < 1);
        REQUIRE(decimal32(0) < 1u);
        REQUIRE(decimal32(0) < 1l);
        REQUIRE(decimal32(0) < 1lu);
        // REQUIRE(decimal32(0) < 1ll);
        // REQUIRE(decimal32(0) < 1llu);

        REQUIRE(0 < decimal32(1));
        REQUIRE(0u < decimal32(1));
        REQUIRE(0l < decimal32(1));
        REQUIRE(0lu < decimal32(1));
        // REQUIRE(0ll < decimal32(1));
        // REQUIRE(0llu < decimal32(1));

        REQUIRE(decimal64(0) < 1);
        REQUIRE(decimal64(0) < 1u);
        REQUIRE(decimal64(0) < 1l);
        REQUIRE(decimal64(0) < 1lu);
        // REQUIRE(decimal64(0) < 1ll);
        // REQUIRE(decimal64(0) < 1llu);

        REQUIRE(0 < decimal64(1));
        REQUIRE(0u < decimal64(1));
        REQUIRE(0l < decimal64(1));
        REQUIRE(0lu < decimal64(1));
        // REQUIRE(0ll < decimal64(1));
        // REQUIRE(0llu < decimal64(1));

        // REQUIRE(decimal128(0) < 1);
        // REQUIRE(decimal128(0) < 1u);
        // REQUIRE(decimal128(0) < 1l);
        // REQUIRE(decimal128(0) < 1lu);
        // REQUIRE(decimal128(0) < 1ll);
        // REQUIRE(decimal128(0) < 1llu);

        // REQUIRE(0 < decimal128(1));
        // REQUIRE(0u < decimal128(1));
        // REQUIRE(0l < decimal128(1));
        // REQUIRE(0lu < decimal128(1));
        // REQUIRE(0ll < decimal128(1));
        // REQUIRE(0llu < decimal128(1));
    }

    SECTION("binary less than or equal")
    {
        REQUIRE(decimal32(0) <= decimal32(1));
        REQUIRE(decimal32(0) <= decimal64(1));
        // REQUIRE(decimal32(0) <= decimal128(1));

        REQUIRE(decimal64(0) <= decimal32(1));
        REQUIRE(decimal64(0) <= decimal64(1));
        // REQUIRE(decimal64(0) <= decimal128(1));
        
        // REQUIRE(decimal128(0) <= decimal32(1));
        // REQUIRE(decimal128(0) <= decimal64(1));
        // REQUIRE(decimal128(0) <= decimal128(1));

        REQUIRE(decimal32(0) <= 1);
        REQUIRE(decimal32(0) <= 1u);
        REQUIRE(decimal32(0) <= 1l);
        REQUIRE(decimal32(0) <= 1lu);
        // REQUIRE(decimal32(0) <= 1ll);
        // REQUIRE(decimal32(0) <= 1llu);

        REQUIRE(0 <= decimal32(1));
        REQUIRE(0u <= decimal32(1));
        REQUIRE(0l <= decimal32(1));
        REQUIRE(0lu <= decimal32(1));
        // REQUIRE(0ll <= decimal32(1));
        // REQUIRE(0llu <= decimal32(1));

        REQUIRE(decimal64(0) <= 1);
        REQUIRE(decimal64(0) <= 1u);
        REQUIRE(decimal64(0) <= 1l);
        REQUIRE(decimal64(0) <= 1lu);
        // REQUIRE(decimal64(0) <= 1ll);
        // REQUIRE(decimal64(0) <= 1llu);

        REQUIRE(0 <= decimal64(1));
        REQUIRE(0u <= decimal64(1));
        REQUIRE(0l <= decimal64(1));
        REQUIRE(0lu <= decimal64(1));
        // REQUIRE(0ll <= decimal64(1));
        // REQUIRE(0llu <= decimal64(1));

        // REQUIRE(decimal128(0) <= 1);
        // REQUIRE(decimal128(0) <= 1u);
        // REQUIRE(decimal128(0) <= 1l);
        // REQUIRE(decimal128(0) <= 1lu);
        // REQUIRE(decimal128(0) <= 1ll);
        // REQUIRE(decimal128(0) <= 1llu);

        // REQUIRE(0 <= decimal128(1));
        // REQUIRE(0u <= decimal128(1));
        // REQUIRE(0l <= decimal128(1));
        // REQUIRE(0lu <= decimal128(1));
        // REQUIRE(0ll <= decimal128(1));
        // REQUIRE(0llu <= decimal128(1));
    }

}