class Vector3d {
private:
    float x, y, z;

public:
    // ����Ĭ�ϲ���ֵ�Ĺ��캯��
    Vector3d(float x = 0, float y = 0, float z = 0)
        : x(x), y(y), z(z) {}

    // �������캯��
    Vector3d(const Vector3d& other)
        : x(other.x), y(other.y), z(other.z) {}

    // ��������Ա����
    float getX() const {
        return x;
    }

    float getY() const {
        return y;
    }

    float getZ() const {
        return z;
    }

    // ���ڲ�������==������
    bool operator==(const Vector3d& other) const {
        return (x == other.x) && (y == other.y) && (z == other.z);
    }

    // �����ڲ�������!=������
    bool operator!=(const Vector3d& other) const {
        return !(*this == other);  // �����ڵ��ڲ��������ص�ʵ��
   
    }

    // �ӷ���������+������
    Vector3d operator+(const Vector3d& other) const {
        return Vector3d(x + other.x, y + other.y, z + other.z);
    }
};
