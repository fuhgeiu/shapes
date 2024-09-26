#include <iostream>
#include <cmath>

class shapes {

public:

    virtual double getarea () const = 0;

    virtual double getperimeter() const = 0;
};

// circle, rectangle, right triangle

class circle : public shapes{

    double radius;

public:

    circle (double Radius) {radius = Radius; }

    double get_area ()  const { return (3.14*(radius*radius)); }

    double get_perimeter() const { return (2*3.14*radius); }
};

class rectangle : public shapes {

    double side1, side2;

public:

    rectangle() = default;

    rectangle (int Side1, int Side2) {side1 = Side1; side2 = Side2;}

    virtual double get_area() const {return (side1*side2);}

    virtual double get_perimeter() const {return ((side1*2)+(side2*2));}
};


class square : public rectangle {

    double side1;

public:

    square(double side) { double side1 = side;}

    double get_perimeter() const override{return (side1*2);}

    double get_area()  const override {return (side1*side1);}
};


class RightTriangle : public shapes {
private:
    double base;
    double height;
public:
    RightTriangle(double b, double h) : base(b), height(h) {}

    double getarea() const override {
        return 0.5 * base * height;
    }
    double getperimeter() const override {
        double hypotenuse = sqrt(base * base + height * height);
        return base + height + hypotenuse;
    }
};


class IsoscelesRightTriangle : public RightTriangle {
public:
    IsoscelesRightTriangle(double leg) : RightTriangle(leg, leg) {}
};
