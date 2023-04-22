#include <iostream>

using namespace std;

float areaTriangle(float base, float height) {
    float area = 0.5 * base * height;
    return area;
}

float areaCircle(float radius) {
    float area = 3.14 * radius * radius;
    return area;
}

float areaRectangle(float base, float height) {
    float area = base * height;
    return area;
}