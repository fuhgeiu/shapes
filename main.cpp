#include "shapes.hpp"
#include <cassert>

int main () {

    shapes circle(1/3.14);

    assert(circle.get_area() == (1/3.14));
    assert(circle.get_perimeter() == (2) );





}