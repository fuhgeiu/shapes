#include <iostream>
#include <cmath>

class shapes {

public:

    virtual const double get_area () const = 0;

    virtual const double get_perimeter() const = 0;

    virtual const char* name() const = 0;
};

// circle, rectangle, right triangle

class circle : public shapes{

    double radius;

public:

    circle (double Radius) {radius = Radius; }

    const double get_area () const { return (3.14*(radius*radius)); }

    const double get_perimeter() const { return (2*3.14*radius); }

    const char* name () const {return "circle";}
};

class rectangle : public shapes {

    double side1, side2;

public:

    rectangle() = default;

    rectangle (int Side1, int Side2) {side1 = Side1; side2 = Side2;}

    virtual const double get_area() const {return (side1*side2);}

    virtual const double get_perimeter() const {return ((side1*2)+(side2*2));}

    const char* name () const {return "rectangle";}
};


class square : public rectangle {

    double side1;

public:

    explicit square(double side) { side1 = side;}

    const double get_perimeter() const {return (side1*2);}

    const double get_area()  const {return (side1*side1);}

    const char* name () const {return "square";}
};


class RightTriangle : public shapes {
protected:
    double base;
    double height;
public:
    RightTriangle(double b, double h) : base(b), height(h) {}

    const double get_area() const {return 0.5 * base * height;}
    const double get_perimeter() const {return base + height + sqrt(base * base + height * height);}

    const char* name () const {return "right triangle";}
};


class IsoscelesRightTriangle : public RightTriangle {

public:
    explicit IsoscelesRightTriangle(double leg) : RightTriangle(leg, leg) {}

    const double get_area() const {return ((base*base)/2);}
    const double get_perimeter() const {return ((2*base) + (base*sqrt(2)));}

    const char* name () const {return "iso right triangle";}
};