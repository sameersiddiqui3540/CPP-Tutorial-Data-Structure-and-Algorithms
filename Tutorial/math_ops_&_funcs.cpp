//
// Created by Sameer on 18-09-2025.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    /*
     constexpr declares a variable or function that must be evaluable at compile-time.
     Its primary goal is to enable compile-time computations, leading to potential performance optimizations
     and use in contexts requiring compile-time constants (e.g., array sizes, template arguments)
     */
    constexpr double x = 3;
    constexpr double y = 4;
    constexpr double min_x_y = min(x, y);
    constexpr double max_x_y = max(x, y);

    cout << "x = " << x << ", y = " << y << endl;
    cout << "Minimum value value among x and y is: " << min_x_y << endl;
    cout << "Maximum value among x and y is: " <<max_x_y << endl;
    cout << "x to the power y: " <<pow(x,y) << endl;
    cout << "square root of 9 is: " << sqrt(9) << endl;
    cout << "absolute value of -10 is: " << abs(-10) << endl;

    const double PI = 3.141592653589;
    cout << "PI = " << PI << endl;
    cout << "PI rounded to nearest integer value: " << round(PI) << endl;
    cout << "Ceil value of PI is: " <<ceil(PI) << endl;
    cout << "Floor value of PI is: " << floor(PI) << endl;

    return 0;
}