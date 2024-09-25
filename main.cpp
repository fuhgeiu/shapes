#include "shapes.hpp"
#include <cassert>

int main () {

    circle *circle1 = new circle(1/3.14);

    assert(circle1->get_area() == (1/3.14));
    assert(circle1->get_perimeter() == (2) );





}