
class shapes {

public:

    virtual int get_area () = 0;

    virtual int get_perimeter() = 0;

};

// circle, rectangel, right triangle

class circle : public shapes{

    double radius;

public:

    circle (double Radius) {radius = Radius; }

    const double get_area ()  const { return (3.14*(radius*radius)); }

    const int get_perimeter() const { return (2*3.14*radius); }
};

class rectangle : public shapes {

    int side1, side2;

public:

    rectangle (int Side1, int Side2) {side1 = Side1; side2 = Side2;}

    const int get_area() const {return (side1*side2);}

    const int get_perimeter() const {return ((side1*2)+(side2*2));}

};

class right_triangle : public shapes {


    int get_area();

    int get_perimeter();


};