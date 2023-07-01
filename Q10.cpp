#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
private:
    double sideA;
    double sideB;
    double sideC;

public:
    Triangle(double a, double b, double c) : sideA(a), sideB(b), sideC(c) {}

    double calculateArea() {
        double s = (sideA + sideB + sideC) / 2; 
        double area = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
        return area;
    }
};

int main() {
    double a, b, c;
    cout << "Enter the lengths of the sides of the triangle: ";
    cin >> a >> b >> c;

    Triangle triangle(a, b, c);
    double area = triangle.calculateArea();

    cout << "The area of the triangle is: " << area << endl;

    return 0;
}
