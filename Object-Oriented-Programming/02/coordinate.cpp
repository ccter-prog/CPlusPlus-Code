#include <iostream>

using namespace std;

class Point3d
{
    public:
        Point3d(double x, double y, double z) : x(x), y(y), z(z)
        {}
        void print(void)
        {
            cout << "x = " << x << " y = " << y << " z = " << z << endl;
        }
    private:
        double x;
        double y;
        double z;
};

int main(void)
{
    Point3d a(1, 2, 3);
    a.print();
    return 0;
}