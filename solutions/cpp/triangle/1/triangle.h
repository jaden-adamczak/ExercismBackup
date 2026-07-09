#pragma once
#include <stdexcept>

namespace triangle {
enum class flavor{equilateral,isosceles,scalene};
bool is_triangle(double a,double b, double c);
flavor kind(double a,double b,double c);
}  // namespace triangle
