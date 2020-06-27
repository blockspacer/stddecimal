#include <catch.hpp>
#include <libdecimal/decimal.hpp>

using namespace std::decimal;

TEST_CASE("decimal", "decimal") 
{
    SECTION("constructors")
    {
       REQUIRE(decimal32() == 0);
    
      
    
    }

    SECTION("makers")
    {
        // decimal32 make_decimal32(long long coeff, int exponent); 
        // decimal32 make_decimal32(unsigned long long coeff, int exponent);
    }

    SECTION("unary arithmetic")
    {
        REQUIRE(+decimal32(1) == 1);
        REQUIRE(+decimal64(1) == 1);
        REQUIRE(+decimal128(1) == 1);

        REQUIRE(+decimal32(-1) == -1);
        REQUIRE(+decimal64(-1) == -1);
        REQUIRE(+decimal128(-1) == -1);

        REQUIRE(+decimal32(0) == 0);
        REQUIRE(+decimal64(0) == 0);
        REQUIRE(+decimal128(0) == 0);

        REQUIRE(-decimal32(1) == -1);
        REQUIRE(-decimal64(1) == -1);
        REQUIRE(-decimal128(1) == -1);

        REQUIRE(-decimal32(-1) == 1);
        REQUIRE(-decimal64(-1) == 1);
        REQUIRE(-decimal128(-1) == 1);

        REQUIRE(-decimal32(0) == 0);
        REQUIRE(-decimal64(0) == 0);
        REQUIRE(-decimal128(0) == 0);
    }

    SECTION("binary addition")
    {
        REQUIRE(decimal32(1) + decimal32(2) == decimal32(3));
        REQUIRE(decimal32(1) + decimal64(2) == decimal64(3));
        REQUIRE(decimal32(1) + decimal128(2) == decimal128(3));

        REQUIRE(decimal64(1) + decimal32(2) == decimal64(3));
        REQUIRE(decimal64(1) + decimal64(2) == decimal64(3));
        REQUIRE(decimal64(1) + decimal128(2) == decimal128(3));

        REQUIRE(decimal128(1) + decimal32(2) == decimal128(3));
        REQUIRE(decimal128(1) + decimal64(2) == decimal128(3));
        REQUIRE(decimal128(1) + decimal128(2) == decimal128(3));

        REQUIRE(decimal32(1) + 2 == decimal32(3));
        REQUIRE(decimal32(1) + 2u == decimal32(3));
        REQUIRE(decimal32(1) + 2l == decimal64(3));
        REQUIRE(decimal32(1) + 2lu == decimal64(3));
        REQUIRE(decimal32(1) + 2ll == decimal128(3));
        REQUIRE(decimal32(1) + 2llu == decimal128(3));

        REQUIRE(1 + decimal32(2) == decimal32(3));
        REQUIRE(1u + decimal32(2) == decimal32(3));
        REQUIRE(1l + decimal32(2) == decimal64(3));
        REQUIRE(1lu + decimal32(2) == decimal64(3));
        REQUIRE(1ll + decimal32(2) == decimal128(3));
        REQUIRE(1llu + decimal32(2) == decimal128(3));

        REQUIRE(decimal64(1) + 2 == decimal64(3));
        REQUIRE(decimal64(1) + 2u == decimal64(3));
        REQUIRE(decimal64(1) + 2l == decimal64(3));
        REQUIRE(decimal64(1) + 2lu == decimal64(3));
        REQUIRE(decimal64(1) + 2ll == decimal128(3));
        REQUIRE(decimal64(1) + 2llu == decimal128(3));

        REQUIRE(1 + decimal64(2) == decimal64(3));
        REQUIRE(1u + decimal64(2) == decimal64(3));
        REQUIRE(1l + decimal64(2) == decimal64(3));
        REQUIRE(1lu + decimal64(2) == decimal64(3));
        REQUIRE(1ll + decimal64(2) == decimal128(3));
        REQUIRE(1llu + decimal64(2) == decimal128(3));

        REQUIRE(decimal128(1) + 2 == decimal128(3));
        REQUIRE(decimal128(1) + 2u == decimal128(3));
        REQUIRE(decimal128(1) + 2l == decimal128(3));
        REQUIRE(decimal128(1) + 2lu == decimal128(3));
        REQUIRE(decimal128(1) + 2ll == decimal128(3));
        REQUIRE(decimal128(1) + 2llu == decimal128(3));

        REQUIRE(1 + decimal128(2) == decimal128(3));
        REQUIRE(1u + decimal128(2) == decimal128(3));
        REQUIRE(1l + decimal128(2) == decimal128(3));
        REQUIRE(1lu + decimal128(2) == decimal128(3));
        REQUIRE(1ll + decimal128(2) == decimal128(3));
        REQUIRE(1llu + decimal128(2) == decimal128(3));
    }

    SECTION("binary subtraction")
    {
        REQUIRE(decimal32(3) - decimal32(2) == decimal32(1));
        REQUIRE(decimal32(3) - decimal64(2) == decimal32(1));
        REQUIRE(decimal32(3) - decimal128(2) == decimal32(1));

        REQUIRE(decimal64(3) - decimal32(2) == decimal64(1));
        REQUIRE(decimal64(3) - decimal64(2) == decimal64(1));
        REQUIRE(decimal64(3) - decimal128(2) == decimal64(1));
        
        REQUIRE(decimal128(3) - decimal32(2) == decimal128(1));
        REQUIRE(decimal128(3) - decimal64(2) == decimal128(1));
        REQUIRE(decimal128(3) - decimal128(2) == decimal128(1));

        REQUIRE(decimal32(3) - 2 == decimal32(1));
        REQUIRE(decimal32(3) - 2u == decimal32(1));
        REQUIRE(decimal32(3) - 2l == decimal64(1));
        REQUIRE(decimal32(3) - 2lu == decimal64(1));
        REQUIRE(decimal32(3) - 2ll == decimal128(1));
        REQUIRE(decimal32(3) - 2llu == decimal128(1));

        REQUIRE(3 - decimal32(2) == decimal32(1));
        REQUIRE(3u - decimal32(2) == decimal32(1));
        REQUIRE(3l - decimal32(2) == decimal64(1));
        REQUIRE(3lu - decimal32(2) == decimal64(1));
        REQUIRE(3ll - decimal32(2) == decimal128(1));
        REQUIRE(3llu - decimal32(2) == decimal128(1));

        REQUIRE(decimal64(3) - 2 == decimal64(1));
        REQUIRE(decimal64(3) - 2u == decimal64(1));
        REQUIRE(decimal64(3) - 2l == decimal64(1));
        REQUIRE(decimal64(3) - 2lu == decimal64(1));
        REQUIRE(decimal64(3) - 2ll == decimal128(1));
        REQUIRE(decimal64(3) - 2llu == decimal128(1));

        REQUIRE(3 - decimal64(2) == decimal64(1));
        REQUIRE(3u - decimal64(2) == decimal64(1));
        REQUIRE(3l - decimal64(2) == decimal64(1));
        REQUIRE(3lu - decimal64(2) == decimal64(1));
        REQUIRE(3ll - decimal64(2) == decimal128(1));
        REQUIRE(3llu - decimal64(2) == decimal128(1));

        REQUIRE(decimal128(3) - 2 == decimal128(1));
        REQUIRE(decimal128(3) - 2u == decimal128(1));
        REQUIRE(decimal128(3) - 2l == decimal128(1));
        REQUIRE(decimal128(3) - 2lu == decimal128(1));
        REQUIRE(decimal128(3) - 2ll == decimal128(1));
        REQUIRE(decimal128(3) - 2llu == decimal128(1));

        REQUIRE(3 - decimal128(2) == decimal128(1));
        REQUIRE(3u - decimal128(2) == decimal128(1));
        REQUIRE(3l - decimal128(2) == decimal128(1));
        REQUIRE(3lu - decimal128(2) == decimal128(1));
        REQUIRE(3ll - decimal128(2) == decimal128(1));
        REQUIRE(3llu - decimal128(2) == decimal128(1));
    }

    SECTION("binary multiplication")
    {
        REQUIRE(decimal32(2) * decimal32(3) == decimal32(6));
        REQUIRE(decimal32(2) * decimal64(3) == decimal64(6));
        REQUIRE(decimal32(2) * decimal128(3) == decimal128(6));

        REQUIRE(decimal64(2) * decimal32(3) == decimal64(6));
        REQUIRE(decimal64(2) * decimal64(3) == decimal64(6));
        REQUIRE(decimal64(2) * decimal128(3) == decimal128(6));
        
        REQUIRE(decimal128(2) * decimal32(3) == decimal128(6));
        REQUIRE(decimal128(2) * decimal64(3) == decimal128(6));
        REQUIRE(decimal128(2) * decimal128(3) == decimal128(6));
    
        REQUIRE(decimal32(2) * 3 == decimal32(6));
        REQUIRE(decimal32(2) * 3u == decimal32(6));
        REQUIRE(decimal32(2) * 3l == decimal64(6));
        REQUIRE(decimal32(2) * 3lu == decimal64(6));
        REQUIRE(decimal32(2) * 3ll == decimal128(6));
        REQUIRE(decimal32(2) * 3llu == decimal128(6));

        REQUIRE(2 * decimal32(3) == decimal32(6));
        REQUIRE(2u * decimal32(3) == decimal32(6));
        REQUIRE(2l * decimal32(3) == decimal64(6));
        REQUIRE(2lu * decimal32(3) == decimal64(6));
        REQUIRE(2ll * decimal32(3) == decimal128(6));
        REQUIRE(2llu * decimal32(3) == decimal128(6));

        REQUIRE(decimal64(2) * 3 == decimal64(6));
        REQUIRE(decimal64(2) * 3u == decimal64(6));
        REQUIRE(decimal64(2) * 3l == decimal64(6));
        REQUIRE(decimal64(2) * 3lu == decimal64(6));
        REQUIRE(decimal64(2) * 3ll == decimal128(6));
        REQUIRE(decimal64(2) * 3llu == decimal128(6));

        REQUIRE(2 * decimal64(3) == decimal64(6));
        REQUIRE(2u * decimal64(3) == decimal64(6));
        REQUIRE(2l * decimal64(3) == decimal64(6));
        REQUIRE(2lu * decimal64(3) == decimal64(6));
        REQUIRE(2ll * decimal64(3) == decimal128(6));
        REQUIRE(2llu * decimal64(3) == decimal128(6));

        REQUIRE(decimal128(2) * 3 == decimal128(6));
        REQUIRE(decimal128(2) * 3u == decimal128(6));
        REQUIRE(decimal128(2) * 3l == decimal128(6));
        REQUIRE(decimal128(2) * 3lu == decimal128(6));
        REQUIRE(decimal128(2) * 3ll == decimal128(6));
        REQUIRE(decimal128(2) * 3llu == decimal128(6));

        REQUIRE(2 * decimal128(3) == decimal128(6));
        REQUIRE(2u * decimal128(3) == decimal128(6));
        REQUIRE(2l * decimal128(3) == decimal128(6));
        REQUIRE(2lu * decimal128(3) == decimal128(6));
        REQUIRE(2ll * decimal128(3) == decimal128(6));
        REQUIRE(2llu * decimal128(3) == decimal128(6));
    }

    SECTION("binary division")
    {
        REQUIRE(decimal32(6) / decimal32(2) == decimal32(3));
        REQUIRE(decimal32(6) / decimal64(2) == decimal64(3));
        REQUIRE(decimal32(6) / decimal128(2) == decimal128(3));

        REQUIRE(decimal64(6) / decimal32(2) == decimal64(3));
        REQUIRE(decimal64(6) / decimal64(2) == decimal64(3));
        REQUIRE(decimal64(6) / decimal128(2) == decimal128(3));
        
        REQUIRE(decimal128(6) / decimal32(2) == decimal128(3));
        REQUIRE(decimal128(6) / decimal64(2) == decimal128(3));
        REQUIRE(decimal128(6) / decimal128(2) == decimal128(3));

        REQUIRE(decimal32(6) / 2 == decimal32(3));
        REQUIRE(decimal32(6) / 2u == decimal32(3));
        REQUIRE(decimal32(6) / 2l == decimal64(3));
        REQUIRE(decimal32(6) / 2lu == decimal64(3));
        REQUIRE(decimal32(6) / 2ll == decimal128(3));
        REQUIRE(decimal32(6) / 2llu == decimal128(3));

        REQUIRE(6 / decimal32(2) == decimal32(3));
        REQUIRE(6u / decimal32(2) == decimal32(3));
        REQUIRE(6l / decimal32(2) == decimal64(3));
        REQUIRE(6lu / decimal32(2) == decimal64(3));
        REQUIRE(6ll / decimal32(2) == decimal128(3));
        REQUIRE(6llu / decimal32(2) == decimal128(3));

        REQUIRE(decimal64(6) / 2 == decimal64(3));
        REQUIRE(decimal64(6) / 2u == decimal64(3));
        REQUIRE(decimal64(6) / 2l == decimal64(3));
        REQUIRE(decimal64(6) / 2lu == decimal64(3));
        REQUIRE(decimal64(6) / 2ll == decimal128(3));
        REQUIRE(decimal64(6) / 2llu == decimal128(3));

        REQUIRE(6 / decimal64(2) == decimal64(3));
        REQUIRE(6u / decimal64(2) == decimal64(3));
        REQUIRE(6l / decimal64(2) == decimal64(3));
        REQUIRE(6lu / decimal64(2) == decimal64(3));
        REQUIRE(6ll / decimal64(2) == decimal128(3));
        REQUIRE(6llu / decimal64(2) == decimal128(3));

        REQUIRE(decimal128(6) / 2 == decimal128(3));
        REQUIRE(decimal128(6) / 2u == decimal128(3));
        REQUIRE(decimal128(6) / 2l == decimal128(3));
        REQUIRE(decimal128(6) / 2lu == decimal128(3));
        REQUIRE(decimal128(6) / 2ll == decimal128(3));
        REQUIRE(decimal128(6) / 2llu == decimal128(3));

        REQUIRE(6 / decimal128(2) == decimal128(3));
        REQUIRE(6u / decimal128(2) == decimal128(3));
        REQUIRE(6l / decimal128(2) == decimal128(3));
        REQUIRE(6lu / decimal128(2) == decimal128(3));
        REQUIRE(6ll / decimal128(2) == decimal128(3));
        REQUIRE(6llu / decimal128(2) == decimal128(3));
    }

    SECTION("binary equal")
    {
        REQUIRE(decimal32(0) == decimal32(0));
        REQUIRE(decimal32(0) == decimal64(0));
        REQUIRE(decimal32(0) == decimal128(0));

        REQUIRE(decimal64(0) == decimal32(0));
        REQUIRE(decimal64(0) == decimal64(0));
        REQUIRE(decimal64(0) == decimal128(0));
        
        REQUIRE(decimal128(0) == decimal32(0));
        REQUIRE(decimal128(0) == decimal64(0));
        REQUIRE(decimal128(0) == decimal128(0));

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

        REQUIRE(decimal128(0) == 0);
        REQUIRE(decimal128(0) == 0u);
        REQUIRE(decimal128(0) == 0l);
        REQUIRE(decimal128(0) == 0lu);
        REQUIRE(decimal128(0) == 0ll);
        REQUIRE(decimal128(0) == 0llu);

        REQUIRE(0 == decimal128(0));
        REQUIRE(0u == decimal128(0));
        REQUIRE(0l == decimal128(0));
        REQUIRE(0lu == decimal128(0));
        REQUIRE(0ll == decimal128(0));
        REQUIRE(0llu == decimal128(0));
    }

    SECTION("binary not equal")
    {
        REQUIRE(decimal32(0) != decimal32(1));
        REQUIRE(decimal32(0) != decimal64(1));
        REQUIRE(decimal32(0) != decimal128(1));

        REQUIRE(decimal64(0) != decimal32(1));
        REQUIRE(decimal64(0) != decimal64(1));
        REQUIRE(decimal64(0) != decimal128(1));
        
        REQUIRE(decimal128(0) != decimal32(1));
        REQUIRE(decimal128(0) != decimal64(1));
        REQUIRE(decimal128(0) != decimal128(1));

        REQUIRE(decimal32(0) != 1);
        REQUIRE(decimal32(0) != 1u);
        REQUIRE(decimal32(0) != 1l);
        REQUIRE(decimal32(0) != 1lu);
        REQUIRE(decimal32(0) != 1ll);
        REQUIRE(decimal32(0) != 1llu);

        REQUIRE(0 != decimal32(1));
        REQUIRE(0u != decimal32(1));
        REQUIRE(0l != decimal32(1));
        REQUIRE(0lu != decimal32(1));
        REQUIRE(0ll != decimal32(1));
        REQUIRE(0llu != decimal32(1));

        REQUIRE(decimal64(0) != 1);
        REQUIRE(decimal64(0) != 1u);
        REQUIRE(decimal64(0) != 1l);
        REQUIRE(decimal64(0) != 1lu);
        REQUIRE(decimal64(0) != 1ll);
        REQUIRE(decimal64(0) != 1llu);

        REQUIRE(0 != decimal64(1));
        REQUIRE(0u != decimal64(1));
        REQUIRE(0l != decimal64(1));
        REQUIRE(0lu != decimal64(1));
        REQUIRE(0ll != decimal64(1));
        REQUIRE(0llu != decimal64(1));

        REQUIRE(decimal128(0) != 1);
        REQUIRE(decimal128(0) != 1u);
        REQUIRE(decimal128(0) != 1l);
        REQUIRE(decimal128(0) != 1lu);
        REQUIRE(decimal128(0) != 1ll);
        REQUIRE(decimal128(0) != 1llu);

        REQUIRE(0 != decimal128(1));
        REQUIRE(0u != decimal128(1));
        REQUIRE(0l != decimal128(1));
        REQUIRE(0lu != decimal128(1));
        REQUIRE(0ll != decimal128(1));
        REQUIRE(0llu != decimal128(1));
    }

    SECTION("binary less")
    {
        REQUIRE(decimal32(0) < decimal32(1));
        REQUIRE(decimal32(0) < decimal64(1));
        REQUIRE(decimal32(0) < decimal128(1));

        REQUIRE(decimal64(0) < decimal32(1));
        REQUIRE(decimal64(0) < decimal64(1));
        REQUIRE(decimal64(0) < decimal128(1));
        
        REQUIRE(decimal128(0) < decimal32(1));
        REQUIRE(decimal128(0) < decimal64(1));
        REQUIRE(decimal128(0) < decimal128(1));

        REQUIRE(decimal32(0) < 1);
        REQUIRE(decimal32(0) < 1u);
        REQUIRE(decimal32(0) < 1l);
        REQUIRE(decimal32(0) < 1lu);
        REQUIRE(decimal32(0) < 1ll);
        REQUIRE(decimal32(0) < 1llu);

        REQUIRE(0 < decimal32(1));
        REQUIRE(0u < decimal32(1));
        REQUIRE(0l < decimal32(1));
        REQUIRE(0lu < decimal32(1));
        REQUIRE(0ll < decimal32(1));
        REQUIRE(0llu < decimal32(1));

        REQUIRE(decimal64(0) < 1);
        REQUIRE(decimal64(0) < 1u);
        REQUIRE(decimal64(0) < 1l);
        REQUIRE(decimal64(0) < 1lu);
        REQUIRE(decimal64(0) < 1ll);
        REQUIRE(decimal64(0) < 1llu);

        REQUIRE(0 < decimal64(1));
        REQUIRE(0u < decimal64(1));
        REQUIRE(0l < decimal64(1));
        REQUIRE(0lu < decimal64(1));
        REQUIRE(0ll < decimal64(1));
        REQUIRE(0llu < decimal64(1));

        REQUIRE(decimal128(0) < 1);
        REQUIRE(decimal128(0) < 1u);
        REQUIRE(decimal128(0) < 1l);
        REQUIRE(decimal128(0) < 1lu);
        REQUIRE(decimal128(0) < 1ll);
        REQUIRE(decimal128(0) < 1llu);

        REQUIRE(0 < decimal128(1));
        REQUIRE(0u < decimal128(1));
        REQUIRE(0l < decimal128(1));
        REQUIRE(0lu < decimal128(1));
        REQUIRE(0ll < decimal128(1));
        REQUIRE(0llu < decimal128(1));
    }

    SECTION("binary less than or equal")
    {
        REQUIRE(decimal32(0) <= decimal32(1));
        REQUIRE(decimal32(0) <= decimal64(1));
        REQUIRE(decimal32(0) <= decimal128(1));

        REQUIRE(decimal64(0) <= decimal32(1));
        REQUIRE(decimal64(0) <= decimal64(1));
        REQUIRE(decimal64(0) <= decimal128(1));
        
        REQUIRE(decimal128(0) <= decimal32(1));
        REQUIRE(decimal128(0) <= decimal64(1));
        REQUIRE(decimal128(0) <= decimal128(1));

        REQUIRE(decimal32(0) <= 1);
        REQUIRE(decimal32(0) <= 1u);
        REQUIRE(decimal32(0) <= 1l);
        REQUIRE(decimal32(0) <= 1lu);
        REQUIRE(decimal32(0) <= 1ll);
        REQUIRE(decimal32(0) <= 1llu);

        REQUIRE(0 <= decimal32(1));
        REQUIRE(0u <= decimal32(1));
        REQUIRE(0l <= decimal32(1));
        REQUIRE(0lu <= decimal32(1));
        REQUIRE(0ll <= decimal32(1));
        REQUIRE(0llu <= decimal32(1));

        REQUIRE(decimal64(0) <= 1);
        REQUIRE(decimal64(0) <= 1u);
        REQUIRE(decimal64(0) <= 1l);
        REQUIRE(decimal64(0) <= 1lu);
        REQUIRE(decimal64(0) <= 1ll);
        REQUIRE(decimal64(0) <= 1llu);

        REQUIRE(0 <= decimal64(1));
        REQUIRE(0u <= decimal64(1));
        REQUIRE(0l <= decimal64(1));
        REQUIRE(0lu <= decimal64(1));
        REQUIRE(0ll <= decimal64(1));
        REQUIRE(0llu <= decimal64(1));

        REQUIRE(decimal128(0) <= 1);
        REQUIRE(decimal128(0) <= 1u);
        REQUIRE(decimal128(0) <= 1l);
        REQUIRE(decimal128(0) <= 1lu);
        REQUIRE(decimal128(0) <= 1ll);
        REQUIRE(decimal128(0) <= 1llu);

        REQUIRE(0 <= decimal128(1));
        REQUIRE(0u <= decimal128(1));
        REQUIRE(0l <= decimal128(1));
        REQUIRE(0lu <= decimal128(1));
        REQUIRE(0ll <= decimal128(1));
        REQUIRE(0llu <= decimal128(1));
    }

    SECTION("binary greater")
    {
        REQUIRE(decimal32(1) > decimal32(0));
        REQUIRE(decimal32(1) > decimal64(0));
        REQUIRE(decimal32(1) > decimal128(0));

        REQUIRE(decimal64(1) > decimal32(0));
        REQUIRE(decimal64(1) > decimal64(0));
        REQUIRE(decimal64(1) > decimal128(0));
        
        REQUIRE(decimal128(1) > decimal32(0));
        REQUIRE(decimal128(1) > decimal64(0));
        REQUIRE(decimal128(1) > decimal128(0));

        REQUIRE(decimal32(1) > 0);
        REQUIRE(decimal32(1) > 0u);
        REQUIRE(decimal32(1) > 0l);
        REQUIRE(decimal32(1) > 0lu);
        REQUIRE(decimal32(1) > 0ll);
        REQUIRE(decimal32(1) > 0llu);

        REQUIRE(1 > decimal32(0));
        REQUIRE(1u > decimal32(0));
        REQUIRE(1l > decimal32(0));
        REQUIRE(1lu > decimal32(0));
        REQUIRE(1ll > decimal32(0));
        REQUIRE(1llu > decimal32(0));

        REQUIRE(decimal64(1) > 0);
        REQUIRE(decimal64(1) > 0u);
        REQUIRE(decimal64(1) > 0l);
        REQUIRE(decimal64(1) > 0lu);
        REQUIRE(decimal64(1) > 0ll);
        REQUIRE(decimal64(1) > 0llu);

        REQUIRE(1 > decimal64(0));
        REQUIRE(1u > decimal64(0));
        REQUIRE(1l > decimal64(0));
        REQUIRE(1lu > decimal64(0));
        REQUIRE(1ll > decimal64(0));
        REQUIRE(1llu > decimal64(0));

        REQUIRE(decimal128(1) > 0);
        REQUIRE(decimal128(1) > 0u);
        REQUIRE(decimal128(1) > 0l);
        REQUIRE(decimal128(1) > 0lu);
        REQUIRE(decimal128(1) > 0ll);
        REQUIRE(decimal128(1) > 0llu);

        REQUIRE(1 > decimal128(0));
        REQUIRE(1u > decimal128(0));
        REQUIRE(1l > decimal128(0));
        REQUIRE(1lu > decimal128(0));
        REQUIRE(1ll > decimal128(0));
        REQUIRE(1llu > decimal128(0));
    }

    SECTION("binary greater than or equal")
    {
        REQUIRE(decimal32(1) >= decimal32(0));
        REQUIRE(decimal32(1) >= decimal64(0));
        REQUIRE(decimal32(1) >= decimal128(0));

        REQUIRE(decimal64(1) >= decimal32(0));
        REQUIRE(decimal64(1) >= decimal64(0));
        REQUIRE(decimal64(1) >= decimal128(0));
        
        REQUIRE(decimal128(1) >= decimal32(0));
        REQUIRE(decimal128(1) >= decimal64(0));
        REQUIRE(decimal128(1) >= decimal128(0));

        REQUIRE(decimal32(1) >= 0);
        REQUIRE(decimal32(1) >= 0u);
        REQUIRE(decimal32(1) >= 0l);
        REQUIRE(decimal32(1) >= 0lu);
        REQUIRE(decimal32(1) >= 0ll);
        REQUIRE(decimal32(1) >= 0llu);

        REQUIRE(1 >= decimal32(0));
        REQUIRE(1u >= decimal32(0));
        REQUIRE(1l >= decimal32(0));
        REQUIRE(1lu >= decimal32(0));
        REQUIRE(1ll >= decimal32(0));
        REQUIRE(1llu >= decimal32(0));

        REQUIRE(decimal64(1) >= 0);
        REQUIRE(decimal64(1) >= 0u);
        REQUIRE(decimal64(1) >= 0l);
        REQUIRE(decimal64(1) >= 0lu);
        REQUIRE(decimal64(1) >= 0ll);
        REQUIRE(decimal64(1) >= 0llu);

        REQUIRE(1 >= decimal64(0));
        REQUIRE(1u >= decimal64(0));
        REQUIRE(1l >= decimal64(0));
        REQUIRE(1lu >= decimal64(0));
        REQUIRE(1ll >= decimal64(0));
        REQUIRE(1llu >= decimal64(0));

        REQUIRE(decimal128(1) >= 0);
        REQUIRE(decimal128(1) >= 0u);
        REQUIRE(decimal128(1) >= 0l);
        REQUIRE(decimal128(1) >= 0lu);
        REQUIRE(decimal128(1) >= 0ll);
        REQUIRE(decimal128(1) >= 0llu);

        REQUIRE(1 >= decimal128(0));
        REQUIRE(1u >= decimal128(0));
        REQUIRE(1l >= decimal128(0));
        REQUIRE(1lu >= decimal128(0));
        REQUIRE(1ll >= decimal128(0));
        REQUIRE(1llu >= decimal128(0));
    }

    SECTION("compound assignment addition")
    {
        REQUIRE((decimal32(1) += decimal32(2)) == decimal32(3));
        REQUIRE((decimal32(1) += decimal64(2)) == decimal32(3));
        REQUIRE((decimal32(1) += decimal128(2)) == decimal32(3));
        REQUIRE((decimal32(1) += 2) == decimal32(3));
        REQUIRE((decimal32(1) += 2u) == decimal32(3));
        REQUIRE((decimal32(1) += 2l) == decimal32(3));
        REQUIRE((decimal32(1) += 2lu) == decimal32(3));
        REQUIRE((decimal32(1) += 2ll) == decimal32(3));
        REQUIRE((decimal32(1) += 2llu) == decimal32(3));
        REQUIRE((decimal32(1) += 2.0f) == decimal32(3));
        REQUIRE((decimal32(1) += 2.0) == decimal32(3));
        //REQUIRE((decimal32(1) += 2.0l) == decimal32(3));

        REQUIRE((decimal64(1) += decimal32(2)) == decimal64(3));
        REQUIRE((decimal64(1) += decimal64(2)) == decimal64(3));
        REQUIRE((decimal64(1) += decimal128(2)) == decimal64(3));
        REQUIRE((decimal64(1) += 2) == decimal64(3));
        REQUIRE((decimal64(1) += 2u) == decimal64(3));
        REQUIRE((decimal64(1) += 2l) == decimal64(3));
        REQUIRE((decimal64(1) += 2lu) == decimal64(3));
        REQUIRE((decimal64(1) += 2ll) == decimal64(3));
        REQUIRE((decimal64(1) += 2llu) == decimal64(3));
        REQUIRE((decimal64(1) += 2.0f) == decimal64(3));
        REQUIRE((decimal64(1) += 2.0) == decimal64(3));
        //REQUIRE((decimal64(1) += 2.0l) == decimal64(3));

        REQUIRE((decimal128(1) += decimal32(2)) == decimal128(3));
        REQUIRE((decimal128(1) += decimal64(2)) == decimal128(3));
        REQUIRE((decimal128(1) += decimal128(2)) == decimal128(3));
        REQUIRE((decimal128(1) += 2) == decimal128(3));
        REQUIRE((decimal128(1) += 2u) == decimal128(3));
        REQUIRE((decimal128(1) += 2l) == decimal128(3));
        REQUIRE((decimal128(1) += 2lu) == decimal128(3));
        REQUIRE((decimal128(1) += 2ll) == decimal128(3));
        REQUIRE((decimal128(1) += 2llu) == decimal128(3));
        REQUIRE((decimal128(1) += 2.0f) == decimal128(3));
        REQUIRE((decimal128(1) += 2.0) == decimal128(3));
        //REQUIRE((decimal128(1) += 2.0l) == decimal128(3));
    }

    SECTION("compound assignment subtraction")
    {
        REQUIRE((decimal32(3) -= decimal32(2)) == decimal32(1));
        REQUIRE((decimal32(3) -= decimal64(2)) == decimal32(1));
        REQUIRE((decimal32(3) -= decimal128(2)) == decimal32(1));
        REQUIRE((decimal32(3) -= 2) == decimal32(1));
        REQUIRE((decimal32(3) -= 2u) == decimal32(1));
        REQUIRE((decimal32(3) -= 2l) == decimal32(1));
        REQUIRE((decimal32(3) -= 2lu) == decimal32(1));
        REQUIRE((decimal32(3) -= 2ll) == decimal32(1));
        REQUIRE((decimal32(3) -= 2llu) == decimal32(1));
        REQUIRE((decimal32(3) -= 2.0f) == decimal32(1));
        REQUIRE((decimal32(3) -= 2.0) == decimal32(1));
        //REQUIRE((decimal32(3) -= 2.0l) == decimal32(1));

        REQUIRE((decimal64(3) -= decimal32(2)) == decimal64(1));
        REQUIRE((decimal64(3) -= decimal64(2)) == decimal64(1));
        REQUIRE((decimal64(3) -= decimal128(2)) == decimal64(1));
        REQUIRE((decimal64(3) -= 2) == decimal64(1));
        REQUIRE((decimal64(3) -= 2u) == decimal64(1));
        REQUIRE((decimal64(3) -= 2l) == decimal64(1));
        REQUIRE((decimal64(3) -= 2lu) == decimal64(1));
        REQUIRE((decimal64(3) -= 2ll) == decimal64(1));
        REQUIRE((decimal64(3) -= 2llu) == decimal64(1));
        REQUIRE((decimal64(3) -= 2.0f) == decimal64(1));
        REQUIRE((decimal64(3) -= 2.0) == decimal64(1));
        //REQUIRE((decimal64(3) -= 2.0l) == decimal64(1));

        REQUIRE((decimal128(3) -= decimal32(2)) == decimal128(1));
        REQUIRE((decimal128(3) -= decimal64(2)) == decimal128(1));
        REQUIRE((decimal128(3) -= decimal128(2)) == decimal128(1));
        REQUIRE((decimal128(3) -= 2) == decimal128(1));
        REQUIRE((decimal128(3) -= 2u) == decimal128(1));
        REQUIRE((decimal128(3) -= 2l) == decimal128(1));
        REQUIRE((decimal128(3) -= 2lu) == decimal128(1));
        REQUIRE((decimal128(3) -= 2ll) == decimal128(1));
        REQUIRE((decimal128(3) -= 2llu) == decimal128(1));
        REQUIRE((decimal128(3) -= 2.0f) == decimal128(1));
        REQUIRE((decimal128(3) -= 2.0) == decimal128(1));
        //REQUIRE((decimal128(3) -= 2.0l) == decimal128(1));
    }

    SECTION("compound assignment multiplication")
    {
        REQUIRE((decimal32(2) *= decimal32(3)) == decimal32(6));
        REQUIRE((decimal32(2) *= decimal64(3)) == decimal32(6));
        REQUIRE((decimal32(2) *= decimal128(3)) == decimal32(6));
        REQUIRE((decimal32(2) *= 3) == decimal32(6));
        REQUIRE((decimal32(2) *= 3u) == decimal32(6));
        REQUIRE((decimal32(2) *= 3l) == decimal32(6));
        REQUIRE((decimal32(2) *= 3lu) == decimal32(6));
        REQUIRE((decimal32(2) *= 3ll) == decimal32(6));
        REQUIRE((decimal32(2) *= 3llu) == decimal32(6));
        REQUIRE((decimal32(2) *= 3.0f) == decimal32(6));
        REQUIRE((decimal32(2) *= 3.0) == decimal32(6));
        // REQUIRE((decimal32(2) *= 3.0l) == decimal32(6));

        REQUIRE((decimal64(2) *= decimal32(3)) == decimal64(6));
        REQUIRE((decimal64(2) *= decimal64(3)) == decimal64(6));
        REQUIRE((decimal64(2) *= decimal128(3)) == decimal64(6));
        REQUIRE((decimal64(2) *= 3) == decimal64(6));
        REQUIRE((decimal64(2) *= 3u) == decimal64(6));
        REQUIRE((decimal64(2) *= 3l) == decimal64(6));
        REQUIRE((decimal64(2) *= 3lu) == decimal64(6));
        REQUIRE((decimal64(2) *= 3ll) == decimal64(6));
        REQUIRE((decimal64(2) *= 3llu) == decimal64(6));
        REQUIRE((decimal64(2) *= 3.0f) == decimal64(6));
        REQUIRE((decimal64(2) *= 3.0) == decimal64(6));
        // REQUIRE((decimal64(2) *= 3.0l) == decimal64(6));

        REQUIRE((decimal128(2) *= decimal32(3)) == decimal128(6));
        REQUIRE((decimal128(2) *= decimal64(3)) == decimal128(6));
        REQUIRE((decimal128(2) *= decimal128(3)) == decimal128(6));
        REQUIRE((decimal128(2) *= 3) == decimal128(6));
        REQUIRE((decimal128(2) *= 3u) == decimal128(6));
        REQUIRE((decimal128(2) *= 3l) == decimal128(6));
        REQUIRE((decimal128(2) *= 3lu) == decimal128(6));
        REQUIRE((decimal128(2) *= 3ll) == decimal128(6));
        REQUIRE((decimal128(2) *= 3llu) == decimal128(6));
        REQUIRE((decimal128(2) *= 3.0f) == decimal128(6));
        REQUIRE((decimal128(2) *= 3.0) == decimal128(6));
        // REQUIRE((decimal128(2) *= 3.0l) == decimal128(6));
}

    SECTION("compound assignment division")
    {
        REQUIRE((decimal32(6) /= decimal32(2)) == decimal32(3));
        REQUIRE((decimal32(6) /= decimal64(2)) == decimal32(3));
        REQUIRE((decimal32(6) /= decimal128(2)) == decimal32(3));
        REQUIRE((decimal32(6) /= 2) == decimal32(3));
        REQUIRE((decimal32(6) /= 2u) == decimal32(3));
        REQUIRE((decimal32(6) /= 2l) == decimal32(3));
        REQUIRE((decimal32(6) /= 2lu) == decimal32(3));
        REQUIRE((decimal32(6) /= 2ll) == decimal32(3));
        REQUIRE((decimal32(6) /= 2llu) == decimal32(3));
        REQUIRE((decimal32(6) /= 2.0f) == decimal32(3));
        REQUIRE((decimal32(6) /= 2.0) == decimal32(3));
        // REQUIRE((decimal32(6) /= 2.0l) == decimal32(3));

        REQUIRE((decimal64(6) /= decimal32(2)) == decimal64(3));
        REQUIRE((decimal64(6) /= decimal64(2)) == decimal64(3));
        REQUIRE((decimal64(6) /= decimal128(2)) == decimal64(3));
        REQUIRE((decimal64(6) /= 2) == decimal64(3));
        REQUIRE((decimal64(6) /= 2u) == decimal64(3));
        REQUIRE((decimal64(6) /= 2l) == decimal64(3));
        REQUIRE((decimal64(6) /= 2lu) == decimal64(3));
        REQUIRE((decimal64(6) /= 2ll) == decimal64(3));
        REQUIRE((decimal64(6) /= 2llu) == decimal64(3));
        REQUIRE((decimal64(6) /= 2.0f) == decimal64(3));
        REQUIRE((decimal64(6) /= 2.0) == decimal64(3));
        // REQUIRE((decimal64(6) /= 2.0l) == decimal64(3));

        REQUIRE((decimal128(6) /= decimal32(2)) == decimal128(3));
        REQUIRE((decimal128(6) /= decimal64(2)) == decimal128(3));
        REQUIRE((decimal128(6) /= decimal128(2)) == decimal128(3));
        REQUIRE((decimal128(6) /= 2) == decimal128(3));
        REQUIRE((decimal128(6) /= 2u) == decimal128(3));
        REQUIRE((decimal128(6) /= 2l) == decimal128(3));
        REQUIRE((decimal128(6) /= 2lu) == decimal128(3));
        REQUIRE((decimal128(6) /= 2ll) == decimal128(3));
        REQUIRE((decimal128(6) /= 2llu) == decimal128(3));
        REQUIRE((decimal128(6) /= 2.0f) == decimal128(3));
        REQUIRE((decimal128(6) /= 2.0) == decimal128(3));
        // REQUIRE((decimal128(6) /= 2.0l) == decimal128(3));
    }

    SECTION("increment and decrement operators")
    {
        REQUIRE(++decimal32(1) == decimal32(2));
        REQUIRE(++decimal64(1) == decimal64(2));
        REQUIRE(++decimal128(1) == decimal128(2));

        REQUIRE(--decimal32(3) == decimal32(2));
        REQUIRE(--decimal64(3) == decimal64(2));
        REQUIRE(--decimal128(3) == decimal128(2));

        auto a32 = decimal32(1);
        auto b32 = a32++;
        REQUIRE(a32 == decimal32(2));
        REQUIRE(b32 == decimal32(1));

        a32 = decimal32(2);
        b32 = a32--;
        REQUIRE(a32 == decimal32(1));
        REQUIRE(b32 == decimal32(2));

        auto a64 = decimal64(1);
        auto b64 = a64++;
        REQUIRE(a64 == decimal64(2));
        REQUIRE(b64 == decimal64(1));

        a64 = decimal64(2);
        b64 = a64--;
        REQUIRE(a64 == decimal64(1));
        REQUIRE(b64 == decimal64(2));

        auto a128 = decimal128(1);
        auto b128 = a128++;
        REQUIRE(a128 == decimal128(2));
        REQUIRE(b128 == decimal128(1));

        a128 = decimal128(2);
        b128 = a128--;
        REQUIRE(a128 == decimal128(1));
        REQUIRE(b128 == decimal128(2));
    }
}