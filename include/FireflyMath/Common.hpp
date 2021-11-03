#pragma once

#include <cmath>

namespace FireflyMath
{
#ifdef USE_HIGH_PRECISION
    typedef double Float;
#else
    typedef float Float;
#endif

    static const Float PI = 3.14159265358979323846;
    static const Float EPSILON = 1.e-6;

    inline Float floor(Float value)
    {
        return std::floor(value);
    }

    inline Float ceil(Float value)
    {
        return std::ceil(value);
    }

    inline Float round(Float value)
    {
        return std::round(value);
    }

    inline Float sqrt(Float value)
    {
        return std::sqrt(value);
    }

    inline Float pow(Float base, Float exponent)
    {
        return std::pow(base, exponent);
    }

    inline Float mod(Float numerator, Float denominator)
    {
        return std::fmod(numerator, denominator);
    }

    inline Float abs(Float value)
    {
        return std::fabs(value);
    }

    inline Float min(Float value1, Float value2)
    {
        return std::fmin(value1, value2);
    }

    inline Float max(Float value1, Float value2)
    {
        return std::fmax(value1, value2);
    }

    inline Float sin(Float value)
    {
        return std::sin(value);
    }

    inline Float cos(Float value)
    {
        return std::cos(value);
    }

    inline Float tan(Float value)
    {
        return std::tan(value);
    }

    inline Float asin(Float value)
    {
        return std::asin(value);
    }

    inline Float acos(Float value)
    {
        return std::acos(value);
    }

    inline Float atan(Float value)
    {
        return std::atan(value);
    }

    inline Float atan2(Float y, Float x)
    {
        return std::atan2(y, x);
    }

    inline Float radToDeg(Float radian)
    {
        return radian * Float(180) / PI;
    }

    inline Float degToRad(Float degree)
    {
        return degree * PI / Float(180);
    }

    inline bool isZero(Float value)
    {
        return abs(value) < EPSILON;
    }

    inline bool areEqual(Float value1, Float value2)
    {
        return isZero(value1 - value2);
    }
}