#include "Vector3D.h"

#include "Common.h"

namespace FireflyMath
{
    const Vector3D Vector3D::xAxis(1.f, 0.f, 0.f);
    const Vector3D Vector3D::yAxis(0.f, 1.f, 0.f);
    const Vector3D Vector3D::zAxis(0.f, 0.f, 1.f);
    const Vector3D Vector3D::zero(0.f, 0.f, 0.f);
    const Vector3D Vector3D::one(1.f, 1.f, 1.f);

    Vector3D::Vector3D(float xValue, float yValue, float zValue) :
        x(xValue), y(yValue), z(zValue)
    {
    }

    Vector3D::Vector3D(const Vector3D& other) :
        x(other.x), y(other.y), z(other.z)
    {
    }

    Vector3D& Vector3D::operator=(const Vector3D& other)
    {
        x = other.x;
        y = other.y;
        z = other.z;
        return *this;
    }

    float Vector3D::length() const
    {
        return sqrt(lengthSquared());
    }

    float Vector3D::lengthSquared() const
    {
        return x * x + y * y + z * z;
    }

    Vector3D Vector3D::normalized() const
    {
        Vector3D normalized = *this;
        normalized.normalize();
        return normalized;
    }

    void Vector3D::normalize()
    {
        float magnitude = length();
        if (isZero(magnitude))
            return;

        magnitude = 1.f / magnitude;
        x *= magnitude;
        y *= magnitude;
        z *= magnitude;
    }

    bool Vector3D::operator==(const Vector3D& other) const
    {
        return areEqual(x, other.x) && areEqual(y, other.y) && areEqual(z, other.z);
    }

    bool Vector3D::operator!=(const Vector3D& other) const
    {
        return !(*this == other);
    }

    Vector3D Vector3D::operator+(const Vector3D& other) const
    {
        return Vector3D(x + other.x, y + other.y, z + other.z);
    }

    Vector3D& Vector3D::operator+=(const Vector3D& other)
    {
        x += other.x;
        y += other.y;
        z += other.z;
        return *this;
    }

    Vector3D Vector3D::operator-(const Vector3D& other) const
    {
        return Vector3D(x - other.x, y - other.y, z - other.z);
    }

    Vector3D& Vector3D::operator-=(const Vector3D& other)
    {
        x -= other.x;
        y -= other.y;
        z -= other.z;
        return *this;
    }

    Vector3D Vector3D::operator-() const
    {
        return Vector3D(-x, -y, -z);
    }

    Vector3D operator*(float scalar, const Vector3D& vector)
    {
        return Vector3D(vector.x * scalar, vector.y * scalar, vector.z * scalar);
    }

    Vector3D Vector3D::operator*(float scalar) const
    {
        return Vector3D(x * scalar, y * scalar, z * scalar);
    }

    Vector3D& Vector3D::operator*=(float scalar)
    {
        x *= scalar;
        y *= scalar;
        z *= scalar;
        return *this;
    }

    Vector3D Vector3D::operator/(float scalar) const
    {
        scalar = 1.f / scalar;
        return Vector3D(x * scalar, y * scalar, z * scalar);
    }

    Vector3D& Vector3D::operator/=(float scalar)
    {
        scalar = 1.f / scalar;
        x *= scalar;
        y *= scalar;
        z *= scalar;
        return *this;
    }

    Vector3D Vector3D::cross(const Vector3D& vector1, const Vector3D& vector2)
    {
        return Vector3D(vector1.y * vector2.z - vector2.y * vector1.z, vector1.z * vector2.x - vector2.z * vector1.x, vector1.x * vector2.y - vector2.x * vector1.y);
    }

    float Vector3D::dot(const Vector3D& vector1, const Vector3D& vector2)
    {
        return vector1.x * vector2.x + vector1.y * vector2.y + vector1.z * vector2.z;
    }

    Vector3D& Vector3D::lerp(const Vector3D& vector1, const Vector3D& vector2, float t)
    {
        return (1.f - t) * vector1 + t * vector2;
    }

    Vector3D Vector3D::project(const Vector3D& vector1, const Vector3D& vector2)
    {
        Vector3D projectionDirection = vector2.normalized();
        return projectionDirection * dot(vector1, projectionDirection);
    }

    Vector3D Vector3D::reject(const Vector3D& vector1, const Vector3D& vector2)
    {
        return vector1 - project(vector1, vector2);
    }
}