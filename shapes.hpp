#include <iostream>


class shapes {

public:

    virtual double get_area () = 0;

    virtual double get_perimeter() = 0;
};

// circle, rectangel, right triangle

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

    double get_perimeter() const {return (side1*2);}

    double get_area()  const {return (side1*side1);}
};



class right_triangle : public shapes {


    double get_area();

    double get_perimeter();


};