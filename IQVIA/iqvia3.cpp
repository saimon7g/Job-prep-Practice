// Given coordinates x,y and radius r of two circle.
//  Find the area of intersection between them. 
//  Print area in double with 6 digit precision.

// src: https://www.geeksforgeeks.org/area-of-intersection-of-two-circles/


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double circleIntersectionArea(double x1, double y1, double r1, double x2, double y2, double r2) {
    // Calculate distance between centers
    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Case 1: Circles do not overlap
    if (d >= r1 + r2) return 0.0;

    // Case 2: One circle is completely inside the other
    if (d <= fabs(r1 - r2)) {
        double r_small = min(r1, r2);
        return M_PI * r_small * r_small;
    }

    // Case 3: Circles partially overlap
    double angle1 = acos((d * d + r1 * r1 - r2 * r2) / (2 * d * r1));
    double angle2 = acos((d * d + r2 * r2 - r1 * r1) / (2 * d * r2));
    double area1 = r1 * r1 * angle1;
    double area2 = r2 * r2 * angle2;
    double overlapArea = area1 + area2 - 0.5 * sqrt((-d + r1 + r2) * (d + r1 - r2) * (d - r1 + r2) * (d + r1 + r2));

    return overlapArea;
}

int main() {
    double x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    
    double result = circleIntersectionArea(x1, y1, r1, x2, y2, r2);
    
    // Print the result with 6-digit precision
    cout << fixed << setprecision(6) << result << endl;
    
    return 0;
}
