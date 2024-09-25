
class shapes {


public:

    virtual get_area ();

    virtual get_perimeter();

};

// circle, rectangel, right triangle

class circle : public shapes{

    double radius;

public:

    circle (int Radius) {radius = Radius }

    int get_area (int radius) {

        return ()
    }

    int get_perimeter() {

        return (3.14*)
    }

};

class rectangle : public shapes {



public:

    rectangle (int )

    int get_area()

    int get_perimeter()

};

class RightTriangle : public Shape {
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

int main() {
    IsoscelesRightTriangle triangle(5);
    
    std::cout << "Area of the Isosceles Right Triangle: " << triangle.getArea() << std::endl;

    std::cout << "Perimeter of the Isosceles Right Triangle: " << triangle.getPerimeter() << std::endl;

    return 0;
}
