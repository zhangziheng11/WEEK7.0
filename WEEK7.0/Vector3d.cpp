class Vector3d {
private:
    float x, y, z;

public:
    // 具有默认参数值的构造函数
    Vector3d(float x = 0, float y = 0, float z = 0)
        : x(x), y(y), z(z) {}

    // 拷贝构造函数
    Vector3d(const Vector3d& other)
        : x(other.x), y(other.y), z(other.z) {}

    // 访问器成员函数
    float getX() const {
        return x;
    }

    float getY() const {
        return y;
    }

    float getZ() const {
        return z;
    }

    // 等于操作符（==）重载
    bool operator==(const Vector3d& other) const {
        return (x == other.x) && (y == other.y) && (z == other.z);
    }

    // 不等于操作符（!=）重载
    bool operator!=(const Vector3d& other) const {
        return !(*this == other);  // 依赖于等于操作符重载的实现
   
    }

    // 加法操作符（+）重载
    Vector3d operator+(const Vector3d& other) const {
        return Vector3d(x + other.x, y + other.y, z + other.z);
    }
};
