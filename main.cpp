#include "shapes.hpp"
#include <cassert>

int main () {

    circle *circle1 = new circle(1/3.14);

    assert(circle1->get_area() == (1/3.14));
    assert(circle1->get_perimeter() == (2) );


    IsoscelesRightTriangle triangle(5);

    std::cout << "Area of the Isosceles Right Triangle: " << triangle.getArea() << std::endl;

    std::cout << "Perimeter of the Isosceles Right Triangle: " << triangle.getPerimeter() << std::endl;


}