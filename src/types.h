#include <iostream>
#include <sstream>

class Vec2f {
private:
    float x, y;
public:
    // constructors
    Vec2f() : x(0.f), y(0.f) {}
    Vec2f(float x, float y, float z) : x(x), y(y) {}

    // TODO: cpy constructor & destructor

    void setXYZ(float x, float y) { this->x = x;
                                    this->y = y; }
    void setX(float x) { this->x = x; }
    void setY(float y) { this->y = y; }

    const float getX() { return x; }
    const float getY() { return y; }

    void scale(float s) { x *= s; y *= s; }
/*
    Vec2f operator+(const float t) { return Vec2f(x+t, y+t, z+t ); }
    Vec2f operator+(const Vec2f v) { return Vec2f(x+v.getX(), y+v.getY(), z+v.getZ() ); }
    Vec2f operator*(const float s) { return Vec2f(x*s, y*s, z*s ); }
*/
    std::string toString() {
        std::stringstream ss;
        ss << "( " << x << ", " << y << " )";
        return ss.str();
    }
};

class Vec3f {
private:
    float x, y, z;
public:
    // constructors
    Vec3f() : x(0.f), y(0.f), z(0.f) {}
    Vec3f(float x, float y, float z) : x(x), y(y), z(z) {}

    void setXYZ(float x, float y, float z) { this->x = x;
                                             this->y = y;
                                             this->z = z; }
    void setX(float x) { this->x = x; }
    void setY(float y) { this->y = y; }
    void setZ(float z) { this->z = z; }

    const float getX() { return x; }
    const float getY() { return y; }
    const float getZ() { return z; }

    float dot(Vec3f v) { return x * v.getX() + y * v.getY() + z * v.getZ();  }
    void scale(float s) { x *= s; y *= s; z *= s; }

    Vec3f operator+(const float t) { return Vec3f(x+t, y+t, z+t ); }
    Vec3f operator+( Vec3f v) { return Vec3f(x+v.getX(), y+v.getY(), z+v.getZ()); }
    // Vec3f operator*(const float s) { return Vec3f(x*s, y*s, z*s ); }

    std::string toString() {
        std::stringstream ss;
        ss << "( " << x << ", " << y << ", " << z << " )";
        return ss.str();
    }
};
