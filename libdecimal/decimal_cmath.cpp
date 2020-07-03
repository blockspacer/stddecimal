#include "decimal_cmath.hpp"

namespace std
{

bool isinf(decimal::decimal32 value)
{
    return bid32_isInf(value.value());
}

bool isinf(decimal::decimal64 value)
{
    return bid64_isInf(value.value());
}

bool isinf(decimal::decimal128 value)
{
    return bid128_isInf(value.value());
}

bool isnan(decimal::decimal32 value)
{
    return bid32_isNaN(value.value());
}

bool isnan(decimal::decimal64 value)
{
    return bid64_isNaN(value.value());
}

bool isnan(decimal::decimal128 value)
{
    return bid128_isNaN(value.value());
}

namespace decimal
{

decimal32 quantize(decimal32 x, decimal32 y)
{
    fenv_t env;
    // TODO
    fe_dec_getenv(&env);
    decimal32 result;
    bid32_quantize(x.value(), y.value(), env.round, &env.flags);
    fe_dec_setenv(&env);
    return result;
} 

decimal32 quantized32(decimal32 x, decimal32 y)
{
    return quantize(x, y);
}

decimal64 quantize(decimal64 x, decimal64 y)
{
    fenv_t env;
    // TODO
    fe_dec_getenv(&env);
    decimal64 result;
    bid64_quantize(x.value(), y.value(), env.round, &env.flags);
    fe_dec_setenv(&env);
    return result;
}

decimal64 quantized64(decimal64 x, decimal64 y)
{
    return quantize(x, y);
}

decimal128 quantize(decimal128 x, decimal128 y)
{
    fenv_t env;
    // TODO
    fe_dec_getenv(&env);
    decimal128 result;
    bid128_quantize(x.value(), y.value(), env.round, &env.flags);
    fe_dec_setenv(&env);
    return result;
}

decimal128 quantized128(decimal128 x, decimal128 y)
{
    return quantize(x, y);
}

decimal32 log10d32(decimal32 x)
{
    fenv_t env;
    // TODO
    fe_dec_getenv(&env);
    decimal32 result;
    bid32_log10(x.value(), env.round, &env.flags);
    fe_dec_setenv(&env);
    return result;
} 

decimal64 log10d64(decimal64 x)
{
    fenv_t env;
    // TODO
    fe_dec_getenv(&env);
    decimal64 result;
    bid64_log10(x.value(), env.round, &env.flags);
    fe_dec_setenv(&env);
    return result;
} 

decimal128 log10d128(decimal128 x)
{
    fenv_t env;
    // TODO
    fe_dec_getenv(&env);
    decimal128 result;
    bid128_log10(x.value(), env.round, &env.flags);
    fe_dec_setenv(&env);
    return result;
}

decimal32 powd32(decimal32 x, decimal32 y)
{
    fenv_t env;
    // TODO
    fe_dec_getenv(&env);
    decimal32 result;
    result.value(bid32_pow(x.value(), y.value(), env.round, &env.flags));
    fe_dec_setenv(&env);
    return result;
} 

decimal64 powd64(decimal64 x, decimal64 y)
{
    fenv_t env;
    // TODO
    fe_dec_getenv(&env);
    decimal64 result;
    result.value(bid64_pow(x.value(), y.value(), env.round, &env.flags));
    fe_dec_setenv(&env);
    return result;
}

decimal128 powd128(decimal128 x, decimal128 y)
{
    fenv_t env;
    // TODO
    fe_dec_getenv(&env);
    decimal128 result;
    result.value(bid128_pow(x.value(), y.value(), env.round, &env.flags));
    fe_dec_setenv(&env);
    return result;
}

decimal32 sqrtd32 (decimal32 value)
{
    fenv_t env;
    // TODO
    fe_dec_getenv(&env);
    decimal32 result;
    result.value(bid32_sqrt(value.value(), env.round, &env.flags));
    fe_dec_setenv(&env);
    return result;
} 

decimal64 sqrtd64 (decimal64 value)
{
    fenv_t env;
    // TODO
    fe_dec_getenv(&env);
    decimal64 result;
    result.value(bid64_sqrt(value.value(), env.round, &env.flags));
    fe_dec_setenv(&env);
    return result;
} 

decimal128 sqrtd128 (decimal128 value)
{
    fenv_t env;
    // TODO
    fe_dec_getenv(&env);
    decimal128 result;
    result.value(bid128_sqrt(value.value(), env.round, &env.flags));
    fe_dec_setenv(&env);
    return result;
}

decimal32 abs(decimal32 d)
{
    decimal32 result;
    result.value(bid32_abs(d.value()));
    return result;
} 

decimal64 abs(decimal64 d)
{
    decimal64 result;
    result.value(bid64_abs(d.value()));
    return result;
} 

decimal128 abs(decimal128 d)
{
    decimal128 result;
    result.value(bid128_abs(d.value()));
    return result;
}

}

}

