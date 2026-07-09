#include "triangle.h"

namespace triangle {
bool is_triangle(double a,double b, double c){
    if (a==0||b==0||c==0) return false;
    else if (a+b>=c&&a+c>=b&&b+c>=a) return true;
    else return false;
}

flavor kind(double a,double b, double c){
    if (!is_triangle(a,b,c)) throw std::domain_error("not a triangle");
    if (a==b&&b==c) return flavor::equilateral;
    if (a==b||b==c||a==c) return flavor::isosceles;
    return flavor::scalene;
}
}  // namespace triangle
