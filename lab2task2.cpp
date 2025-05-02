#include <iostream>
#include <cmath> 

using namespace std;

class Shape {
public:
    
    virtual double calculateArea() const = 0;

   
    virtual ~Shape() {}
};


class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    
    Rectangle(double l, double w) : length(l), width(w) {}

    double getLength() const { return length; }

   
    void setLength(double l) { length = l; }

   
    double getWidth() const { return width; }

   
    void setWidth(double w) { width = w; }

   
    double calculateArea() const override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    
    Circle(double r) : radius(r) {}

   
    double getRadius() const { return radius; }


    void setRadius(double r) { radius = r; }

  
    double calculateArea() const override {
        return M_PI * radius * radius;
    }
};


class Square : public Shape {
private:
    double side;

public:
   
    Square(double s) : side(s) {}

   
    double getSide() const { return side; }

   
    void setSide(double s) { side = s; }

    double calculateArea() const override {
        return side * side;
    }
};

int main() {
    int choice;
    double dimension1, dimension2;
    
    cout << "Choose a shape to calculate area: " << endl;
    cout << "1. Rectangle" << endl;
    cout << "2. Circle" << endl;
    cout << "3. Square" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    Shape* shape = nullptr;

    switch (choice) {
        case 1:
           
            cout << "Enter length of rectangle: ";
            cin >> dimension1;
            cout << "Enter width of rectangle: ";
            cin >> dimension2;
            shape = new Rectangle(dimension1, dimension2);
            break;
        
        case 2:
            
            cout << "Enter radius of circle: ";
            cin >> dimension1;
            shape = new Circle(dimension1);
            break;

        case 3:
          
            cout << "Enter side length of square: ";
            cin >> dimension1;
            shape = new Square(dimension1);
            break;

        default:
            cout << "Invalid choice!" << endl;
            return 0;
    }

 
    cout << "The area of the shape is: " << shape->calculateArea() << endl;

  
    delete shape;

    return 0;
}
