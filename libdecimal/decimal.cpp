#include "decimal.hpp"

namespace std::decimal
{

// 32 ------------------------------------------------

BID_UINT32 operator_32bit::resize(decimal32 value) {
    return value.value();
}

BID_UINT32 operator_32bit::resize(decimal64 value) {
    _IDEC_flags flags = 0;
    return bid64_to_bid32(value.value(), round_mode, &flags);
}

BID_UINT32 operator_32bit::resize(decimal128 value) {
    _IDEC_flags flags = 0;
    return bid128_to_bid32(value.value(), round_mode, &flags);
}

// 64 ------------------------------------------------

BID_UINT64 operator_64bit::resize(decimal32 value) {
    _IDEC_flags flags = 0;
    return bid32_to_bid64(value.value(), &flags);
}

BID_UINT64 operator_64bit::resize(decimal64 value) {
    return value.value();
}

BID_UINT64 operator_64bit::resize(decimal128 value) {
    _IDEC_flags flags = 0;
    return bid128_to_bid64(value.value(), round_mode, &flags);
}

// 128 -----------------------------------------------

BID_UINT128 operator_128bit::resize(decimal32 value) {
    _IDEC_flags flags = 0;
    return bid32_to_bid128(value.value(), &flags);
}

BID_UINT128 operator_128bit::resize(decimal64 value) {
    _IDEC_flags flags = 0;
    return bid64_to_bid128(value.value(), &flags);
}

BID_UINT128 operator_128bit::resize(decimal128 value) {
    return value.value();
}


_IDEC_flags flags = 0;

template<typename DecimalType, typename CoefficientType>
DecimalType make_decimal(CoefficientType coeff, int exponent)
{
    DecimalType multiplier;
    DecimalType power{1};
    DecimalType result{coeff};

    if (exponent < 0) {
        multiplier = DecimalType{1} / DecimalType{10};
		exponent = -exponent;                                        
    }
    else {
        multiplier = DecimalType{10};
    }

    for (int i = 0; i < exponent; ++i) {
        power *= multiplier;
    }

    return result * power;
}


decimal32 make_decimal32(long long coeff, int exponent)
{
    return make_decimal<decimal32>(coeff, exponent);    
} 

decimal32 make_decimal32(unsigned long long coeff, int exponent)
{
    return make_decimal<decimal32>(coeff, exponent);    
}

decimal64 make_decimal64(long long coeff, int exponent)
{
    return make_decimal<decimal64>(coeff, exponent);    
}

decimal64 make_decimal64(unsigned long long coeff, int exponent)
{
    return make_decimal<decimal64>(coeff, exponent);    
}

decimal128 make_decimal128(long long coeff, int exponent)
{
    return make_decimal<decimal128>(coeff, exponent);    
}

decimal128 make_decimal128(unsigned long long coeff, int exponent)
{
    return make_decimal<decimal128>(coeff, exponent);    
}

long double decimal32_to_long_double(decimal32 d)
{
    // TODO
    return 0;
}

long double decimal64_to_long_double(decimal64 d)
{
    // TODO
    return 0;
} 

long double decimal128_to_long_double(decimal128 d)
{
    // TODO
    return 0;
} 

long double decimal_to_long_double(decimal32 d)
{
    // TODO
    return 0;
}

long double decimal_to_long_double(decimal64 d)
{
    // TODO
    return 0;
}

long double decimal_to_long_double(decimal128 d)
{
    // TODO
    return 0;
}


// 3.2.7 unary arithmetic operators: 

decimal32 operator+(decimal32 rhs)
{
    decimal32 result;
    result.value(rhs.value());
    return result;
}

decimal64 operator+(decimal64 rhs)
{
    decimal64 result;
    result.value(rhs.value());
    return result;
}

decimal128 operator+(decimal128 rhs)
{
    decimal128 result;
    result.value(rhs.value());
    return result;
}

decimal32 operator-(decimal32 rhs)
{
    decimal32 result;
    result.value(bid32_negate(rhs.value()));
    return result;
}

decimal64 operator-(decimal64 rhs)
{
    decimal64 result;
    result.value(bid64_negate(rhs.value()));
    return result;
}

decimal128 operator-(decimal128 rhs)
{
    decimal128 result;
    result.value(bid128_negate(rhs.value()));
    return result;
}

// decimal32 ------------------------------------------------------------------

decimal32::decimal32()
:   m_value(bid32_from_int32(0, round_mode, &flags))
{
}

decimal32::decimal32(decimal64 d64)
:   m_value(bid64_to_bid32(d64.value(), round_mode, &flags))
{
}

decimal32::decimal32(decimal128 d128)
:   m_value(bid128_to_bid32(d128.value(), round_mode, &flags))
{
}

decimal32::decimal32(float r)
:   m_value(binary32_to_bid32(r, round_mode, &flags))
{
}

decimal32::decimal32(double r)
:   m_value(binary64_to_bid32(r, round_mode, &flags))
{
}

decimal32::decimal32(long double r)
// : m_value(binary128_to_bid32(r, round_mode, &flags))
{
}

decimal32::decimal32(int z)
:   m_value(bid32_from_int32(z, round_mode, &flags))
{
}

decimal32::decimal32(unsigned int z)
:   m_value(bid32_from_uint32(z, round_mode, &flags))
{
}

decimal32::decimal32(long z)
:   m_value(bid32_from_int64(z, round_mode, &flags))
{
}

decimal32::decimal32(unsigned long z)
:   m_value(bid32_from_uint64(z, round_mode, &flags))
{
}

decimal32::decimal32(long long z)
{
    // TODO
}

decimal32::decimal32(unsigned long long z)
{
    // TODO
}

decimal32::operator long long() const
{
    // TODO - is this the appropriate conversion?
    return bid32_to_int32_floor(m_value, &flags);
}

decimal32& decimal32::operator++()
{
    *this += 1;
    return *this;
}

decimal32 decimal32::operator++(int)
{
    auto result = *this;
    *this += 1;
    return result;
}

decimal32& decimal32::operator--()
{
    *this -= 1;
    return *this;
}

decimal32 decimal32::operator--(int)
{
    auto result = *this;
    *this -= 1;    
    return result;
}

// decimal64 ------------------------------------------------------------------

decimal64::decimal64()
:   m_value(bid64_from_int64(0, round_mode, &flags))
{
}
    
decimal64::decimal64(decimal32 d32)
:   m_value(bid32_to_bid64(d32.value(), &flags))
{
}

decimal64::decimal64(decimal128 d128)
:   m_value(bid128_to_bid64(d128.value(), round_mode, &flags))
{
} 

decimal64::decimal64(float r)
:   m_value(binary32_to_bid64(r, round_mode, &flags))
{
} 

decimal64::decimal64(double r)
:   m_value(binary64_to_bid64(r, round_mode, &flags))
{
} 

decimal64::decimal64(long double r)
{
    // TODO
}
    
decimal64::decimal64(int z)
:   m_value(bid64_from_int32(z)) // TDOO - why are these different?
{
}

decimal64::decimal64(unsigned int z)
:   m_value(bid64_from_uint32(z)) // TDOO - why are these different?
{
}

decimal64::decimal64(long z)
:   m_value(bid64_from_int64(z, round_mode, &flags))
{
}

decimal64::decimal64(unsigned long z)
:   m_value(bid64_from_uint64(z, round_mode, &flags))
{
} 

decimal64::decimal64(long long z)
{
    // TODO
} 

decimal64::decimal64(unsigned long long z)
{
    // TODO
}
    
decimal64::operator long long() const
{
    // TODO - is this the appropriate conversion?
    return bid32_to_int64_floor(m_value, 0);
}

decimal64& decimal64::operator++()
{
    *this += 1;
    return *this;
}

decimal64 decimal64::operator++(int)
{
    auto result = *this;
    *this += 1;
    return result;
}

decimal64& decimal64::operator--()
{
    *this -= 1;
    return *this;
}

decimal64 decimal64::operator--(int)
{
    auto result = *this;
    *this -= 1;
    return result;
}

// decimal128 -----------------------------------------------------------------

decimal128::decimal128()
:   m_value(bid128_from_int32(0))
{
}
    
decimal128::decimal128(decimal32 d32)
:   m_value(bid32_to_bid128(d32.value(), &flags))
{
}

decimal128::decimal128(decimal64 d64)
:   m_value(bid64_to_bid128(d64.value(), &flags))
{
} 

decimal128::decimal128(float r)
:   m_value(binary32_to_bid128(r, round_mode, &flags))
{
}

decimal128::decimal128(double r)
:   m_value(binary64_to_bid128(r, round_mode, &flags))
{
} 

decimal128::decimal128(long double r)
//:   m_value(binary128_to_bid128(r, round_mode, &flags))
{
}

decimal128::decimal128(int z)
:   m_value(bid128_from_int32(z))
{
}

decimal128::decimal128(unsigned int z)
:   m_value(bid128_from_uint32(z))
{
} 

decimal128::decimal128(long z)
:   m_value(bid128_from_int64(z))
{
}

decimal128::decimal128(unsigned long z)
:   m_value(bid128_from_uint64(z))
{
}

decimal128::decimal128(long long z)
{
    // TODO
}

decimal128::decimal128(unsigned long long z)
{
    // TODO
}

decimal128::operator long long() const
{
    // TODO
    return 0;
}

decimal128& decimal128::operator++()
{
    *this += 1;
    return *this;
}

decimal128 decimal128::operator++(int)
{
    auto result = *this;
    *this += 1;
    return result;
}

decimal128& decimal128::operator--()
{
    *this -= 1;
    return *this;
}

decimal128 decimal128::operator--(int)
{
    auto result = *this;
    *this -= 1;
    return result;
}

}