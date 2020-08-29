#ifndef SEAD_VECTOR_H_
#define SEAD_VECTOR_H_

#include <basis/seadTypes.h>
#include <math/seadMathPolicies.h>

namespace sead
{
template <typename T>
struct Vector2 : public Policies<T>::Vec2Base
{
    constexpr Vector2() = default;
    constexpr Vector2(T x, T y)
    {
        this->x = x;
        this->y = y;
    }

    Vector2& operator+=(const Vector2& other)
    {
        this->x += other.x;
        this->y += other.y;
        return *this;
    }

    friend Vector2 operator+(const Vector2& a, const Vector2& b)
    {
        return {a.x + b.x, a.y + b.y};
    }

    Vector2& operator-=(const Vector2& other)
    {
        this->x -= other.x;
        this->y -= other.y;
        return *this;
    }

    friend Vector2 operator-(const Vector2& a, const Vector2& b)
    {
        return {a.x - b.x, a.y - b.y};
    }

    Vector2& operator*=(T t)
    {
        this->x *= t;
        this->y *= t;
        return *this;
    }

    friend Vector2 operator*(const Vector2& a, T t) { return {a.x * t, a.y * t}; }
    friend Vector2 operator*(T t, const Vector2& a) { return operator*(a, t); }

    Vector2& operator/=(T t)
    {
        this->x /= t;
        this->y /= t;
        return *this;
    }

    friend Vector2 operator/(const Vector2& a, T t) { return {a.x / t, a.y / t}; }
    friend Vector2 operator/(T t, const Vector2& a) { return operator/(a, t); }

    static const Vector2 zero;
    static const Vector2 ex;
    static const Vector2 ey;
    static const Vector2 ones;
};

template <typename T>
struct Vector3 : public Policies<T>::Vec3Base
{
    constexpr Vector3() = default;
    constexpr Vector3(T x, T y, T z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    Vector3& operator+=(const Vector3& other)
    {
        this->x += other.x;
        this->y += other.y;
        this->z += other.z;
        return *this;
    }

    friend Vector3 operator+(const Vector3& a, const Vector3& b)
    {
        return {a.x + b.x, a.y + b.y, a.z + b.z};
    }

    Vector3& operator-=(const Vector3& other)
    {
        this->x -= other.x;
        this->y -= other.y;
        this->z -= other.z;
        return *this;
    }

    friend Vector3 operator-(const Vector3& a, const Vector3& b)
    {
        return {a.x - b.x, a.y - b.y, a.z - b.z};
    }

    Vector3& operator*=(T t)
    {
        this->x *= t;
        this->y *= t;
        this->z *= t;
        return *this;
    }

    friend Vector3 operator*(const Vector3& a, T t) { return {a.x * t, a.y * t, a.z * t}; }
    friend Vector3 operator*(T t, const Vector3& a) { return operator*(a, t); }

    Vector3& operator/=(T t)
    {
        this->x /= t;
        this->y /= t;
        this->z /= t;
        return *this;
    }

    friend Vector3 operator/(const Vector3& a, T t) { return {a.x / t, a.y / t, a.z / t}; }
    friend Vector3 operator/(T t, const Vector3& a) { return operator/(a, t); }

    static const Vector3 zero;
    static const Vector3 ex;
    static const Vector3 ey;
    static const Vector3 ez;
    static const Vector3 ones;
};

template <typename T>
struct Vector4 : public Policies<T>::Vec4Base
{
    constexpr Vector4() = default;
    constexpr Vector4(T x, T y, T z, T w)
    {
        this->x = x;
        this->y = y;
        this->z = z;
        this->w = w;
    }

    Vector4& operator+=(const Vector4& other)
    {
        this->x += other.x;
        this->y += other.y;
        this->z += other.z;
        this->w += other.w;
        return *this;
    }

    friend Vector4 operator+(const Vector4& a, const Vector4& b)
    {
        return {a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w};
    }

    Vector4& operator-=(const Vector4& other)
    {
        this->x -= other.x;
        this->y -= other.y;
        this->z -= other.z;
        this->w -= other.w;
        return *this;
    }

    friend Vector4 operator-(const Vector4& a, const Vector4& b)
    {
        return {a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w};
    }

    Vector4& operator*=(T t)
    {
        this->x *= t;
        this->y *= t;
        this->z *= t;
        this->w *= t;
        return *this;
    }

    friend Vector4 operator*(const Vector4& a, T t) { return {a.x * t, a.y * t, a.z * t, a.w * t}; }
    friend Vector4 operator*(T t, const Vector4& a) { return operator*(a, t); }

    Vector4& operator/=(T t)
    {
        this->x /= t;
        this->y /= t;
        this->z /= t;
        this->w /= t;
        return *this;
    }

    friend Vector4 operator/(const Vector4& a, T t) { return {a.x / t, a.y / t, a.z / t, a.w / t}; }
    friend Vector4 operator/(T t, const Vector4& a) { return operator/(a, t); }

    static const Vector4 zero;
    static const Vector4 ex;
    static const Vector4 ey;
    static const Vector4 ez;
    static const Vector4 ew;
    static const Vector4 ones;
};

typedef Vector2<f32> Vector2f;
typedef Vector3<f32> Vector3f;
typedef Vector4<f32> Vector4f;

}  // namespace sead

#endif  // #define SEAD_VECTOR_H_
