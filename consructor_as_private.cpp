#include <iostream>

class Point {
private:
    int x, y, z;

    // Private constructor
    Point(int xVal, int yVal, int zVal) : x(xVal), y(yVal), z(zVal) {}

public:
    // Static factory method
    static Point create(int xVal, int yVal, int zVal) {
        return Point(xVal, yVal, zVal);
    }

    // Display function
    void display() const {
        std::cout << "Point(" << x << ", " << y << ", " << z << ")\n";
    }
};

int main() {
    // Creating an object using the static factory method
    Point p = Point::create(10, 20, 30);
    p.display();
    return 0;
}
