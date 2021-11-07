#pragma once

namespace FireflyMath
{
    class Vector3D
    {
    public:
        Vector3D() = default;
        Vector3D(float xValue, float yValue, float zValue);
        Vector3D(const Vector3D& other);
        Vector3D& operator=(const Vector3D& other);

        float length() const;
        float lengthSquared() const;
        Vector3D normalized() const;
        void normalize();

        bool operator==(const Vector3D& other) const;
        bool operator!=(const Vector3D& other) const;

        Vector3D operator+(const Vector3D& other) const;
        Vector3D& operator+=(const Vector3D& other);
        Vector3D operator-(const Vector3D& other) const;
        Vector3D& operator-=(const Vector3D& other);
        Vector3D operator-() const;

        friend Vector3D operator*(float scalar, const Vector3D& vector);
        Vector3D operator*(float scalar) const;
        Vector3D& operator*=(float scalar);
        Vector3D operator/(float scalar) const;
        Vector3D& operator/=(float scalar);

        static Vector3D cross(const Vector3D& vector1, const Vector3D& vector2);
        static float dot(const Vector3D& vector1, const Vector3D& vector2);
        static Vector3D& lerp(const Vector3D& vector1, const Vector3D& vector2, float t);
        static Vector3D project(const Vector3D& vector1, const Vector3D& vector2);
        static Vector3D reject(const Vector3D& vector1, const Vector3D& vector2);

        static const Vector3D xAxis;
        static const Vector3D yAxis;
        static const Vector3D zAxis;
        static const Vector3D zero;
        static const Vector3D one;

        float x = 0.f;
        float y = 0.f;
        float z = 0.f;
    };
}