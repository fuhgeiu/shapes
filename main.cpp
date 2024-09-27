#include "shapes.hpp"
#include <cassert>
#include <iostream>

void printAreaToScreen (const shapes* S) {  // warning! will pass in any object into a const, use only const member funcitons
    std::cout << S->name()  << "s area is " << S->get_area() << std::endl;
}

int main () {


//  testing PrintAreaToScreen

    auto *circle1 = new circle(1/3.14);

    const auto *circle8 = new circle(1/3.14);     // warning! can only call const member functions

    printAreaToScreen(circle1);     // warning! passed obj will become const
    assert(circle1->get_area() > 0.318 && circle1->get_area() < 0.32);

    printAreaToScreen(circle8);     // warning! passed obj will become const
    assert(circle1->get_area() > 0.318 && circle1->get_area() < 0.32);

    delete circle1; delete circle8;                 // !warning, dangeling pointer
    circle1 = nullptr; circle8 = nullptr;

//__________________________________________________________________________________________________________________

    auto *rectangle1 = new rectangle(2,7);

    printAreaToScreen(rectangle1);                     // warning! passed obj will become const
    assert(rectangle1->get_area() == 14);

    delete rectangle1;                              // warning! dangeling pointer
    rectangle1 = nullptr;

//_________________________________________________________________________________________________________________

    auto *square1 = new square(3);

    printAreaToScreen(square1);
    assert(square1->get_area() == 9);

    delete square1;                                 // warning! dangeling pointer
    square1 = nullptr;

 //________________________________________________________________________________________________________________

    auto *right_triangle1 = new RightTriangle(3,4);

    printAreaToScreen(right_triangle1);
    assert(right_triangle1->get_area() == 6);

    delete right_triangle1;                         // warning! dangeling pointer
    right_triangle1 = nullptr;

//_________________________________________________________________________________________________________________

    auto *iso_right_triangle = new IsoscelesRightTriangle(5);

    printAreaToScreen(iso_right_triangle);
    assert(iso_right_triangle->get_area() == 12.5);

    delete iso_right_triangle;                  // warning! dangeling pointer
    iso_right_triangle = nullptr;
}