#include <cmath>
#include <iostream>
using namespace std;

struct Point {
  float x;
  float y;
};

struct Triangle {
  Point p1;
  Point p2;
  Point p3;
};

float computeTriangleArea(const Triangle &triangle);

int main() {

  Triangle triangle;

  // 3 units right 4 units up

  cout << "Enter first coordinate (x, y) ";
  cin >> triangle.p1.x >> triangle.p1.y;
  cout << "Old first coordinate: " << triangle.p1.x << ", " << triangle.p1.y
       << "\n";

  cout << "Enter second coordinate (x, y)";
  cin >> triangle.p2.x >> triangle.p2.y;
  cout << "Old second coordinate: " << triangle.p2.x << ", " << triangle.p2.y
       << "\n";

  cout << "Enter third coordinate (x, y)";
  cin >> triangle.p3.x >> triangle.p3.y;
  cout << "Old third coordinate: " << triangle.p3.x << ", " << triangle.p3.y
       << "\n";

  triangle.p1.x += 3;
  triangle.p1.y += 4;

  triangle.p2.x += 3;
  triangle.p2.y += 4;

  triangle.p3.x += 3;
  triangle.p3.y += 4;

  cout << "Updated first coordinate: " << triangle.p1.x << ", " << triangle.p1.y
       << "\n";
  cout << "Updated second coordinate: " << triangle.p2.x << ", "
       << triangle.p2.y << "\n";
  cout << "Updated the coordinate: " << triangle.p3.x << ", " << triangle.p3.y
       << "\n";

  cout << endl;

  cout << "Area of triangle: " << computeTriangleArea(triangle) << "\n";

  return 0;
}

float computeTriangleArea(const Triangle &triangle) {
  return 0.5 *
         fabs((triangle.p1.x * triangle.p2.y + triangle.p2.x * triangle.p3.y +
               triangle.p3.x * triangle.p1.y) -
              (triangle.p1.y * triangle.p2.x + triangle.p2.y * triangle.p3.x +
               triangle.p3.y * triangle.p1.x));
}
