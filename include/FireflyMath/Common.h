#pragma once

#include <cmath>

namespace FireflyMath
{
    static const float PI = 3.14159265358979323846f;
    static const float EPSILON = 1.e-6f;

    inline float floor(float value)
    {
        return std::floor(value);
    }

    inline float ceil(float value)
    {
        return std::ceil(value);
    }

    inline float round(float value)
    {
        return std::round(value);
    }

    inline float sqrt(float value)
    {
        return std::sqrt(value);
    }

    inline float pow(float base, float exponent)
    {
        return std::pow(base, exponent);
    }

    inline float mod(float numerator, float denominator)
    {
        return std::fmod(numerator, denominator);
    }

    inline float abs(float value)
    {
        return std::fabs(value);
    }

    inline float min(float value1, float value2)
    {
        return std::fmin(value1, value2);
    }

    inline float max(float value1, float value2)
    {
        return std::fmax(value1, value2);
    }

    inline float sin(float value)
    {
        return std::sin(value);
    }

    inline float cos(float value)
    {
        return std::cos(value);
    }

    inline float tan(float value)
    {
        return std::tan(value);
    }

    inline float asin(float value)
    {
        return std::asin(value);
    }

    inline float acos(float value)
    {
        return std::acos(value);
    }

    inline float atan(float value)
    {
        return std::atan(value);
    }

    inline float atan2(float y, float x)
    {
        return std::atan2(y, x);
    }

    inline float radToDeg(float radian)
    {
        return radian * 180.f / PI;
    }

    inline float degToRad(float degree)
    {
        return degree * PI / 180.f;
    }

    inline bool isZero(float value)
    {
        return abs(value) < EPSILON;
    }

    inline bool areEqual(float value1, float value2)
    {
        return isZero(value1 - value2);
    }
}