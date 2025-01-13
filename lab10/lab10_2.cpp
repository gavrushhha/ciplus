#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
using namespace std;

struct Point {
    double x, y;
    Point(double x = 0, double y = 0) : x(x), y(y) {}
};

double calculateDistance(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    int n;
    cout << "Введите количество точек: ";
    cin >> n;
    if (n < 2) {
        cout << "Должно быть хотя бы две точки!" << endl;
        return 1;
    }

    vector<Point> points(n);
    cout << "Введите координаты точек (x и y):" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Точка #" << i + 1 << ": ";
        cin >> points[i].x >> points[i].y;
    }
    Point closestPoint1, closestPoint2;
    double minDistance = numeric_limits<double>::max();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            double distance = calculateDistance(points[i], points[j]);
            if (distance < minDistance) {
                minDistance = distance;
                closestPoint1 = points[i];
                closestPoint2 = points[j];
            }
        }
    }
    cout << "\nДве ближайшие точки:" << endl;
    cout << "Точка 1: (" << closestPoint1.x << ", " << closestPoint1.y << ")" << endl;
    cout << "Точка 2: (" << closestPoint2.x << ", " << closestPoint2.y << ")" << endl;
    cout << "Минимальное расстояние: " << minDistance << endl;

    return 0;
}
