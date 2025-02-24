#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle {
private:
    point center;
    double radius;
public:
    Circle(double x, double y, double r) {
        center.xPosition = x;
        center.yPosition = y;
        radius = r;
    }
    double area() {
        return M_PI * pow(radius, 2);
    }
    double distanceFromCenter(point pt) {
        return sqrt(pow(center.xPosition - pt.xPosition, 2) + pow(center.yPosition - pt.yPosition, 2));
    }
    bool contains(point pt) {
        if(pt.xPosition <= radius && pt.yPosition <= radius) return 1;
        else return 0;
    }
};

int main() {
    Circle circle1(1, 2, 7);
    point para;
    para.xPosition = 4;
    para.yPosition = 6;

    cout << circle1.area() << " " << circle1.distanceFromCenter(para) << " " << circle1.contains(para) << endl;

    return 0;
}