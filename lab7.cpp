//﻿#include <iostream>
//#include <algorithm> // Для std::min
//
//using namespace std;
//
//class Array {
//protected:
//    unsigned* array;
//    size_t size;
//    static const size_t MAX_SIZE = 100; 
//
//public:
//    Array(size_t n, unsigned initialValue = 0) : size(n) {
//        size = (n > MAX_SIZE) ? MAX_SIZE : n;
//        array = new unsigned[size];
//        fill(array, array + size, initialValue);
//    }
//
//    // Деструктор
//    virtual ~Array() {
//        delete[] array;
//    }
//
//    virtual void add(const Array& other) {
//        size_t minSize = min(this->size, other.size);
//        for (size_t i = 0; i < minSize; i++) {
//            this->array[i] += other.array[i];
//        }
//    }
//
//    void print() const {
//        for (size_t i = 0; i < size; i++) {
//            cout << array[i] << " ";
//        }
//        cout << endl;
//    }
//
//    size_t getSize() const {
//        return size;
//    }
//
//    unsigned* getArray() const {
//        return array;
//    }
//};
//
//class DoubleArray : public Array {
//public:
//    using Array::Array; 
//
//    virtual void add(const Array& other) override {
//        size_t minSize = min(getSize(), other.getSize());
//        for (size_t i = 0; i < minSize; i++) {
//            getArray()[i] += 2 * other.getArray()[i];
//        }
//    }
//};
//
//class SquareArray : public Array {
//public:
//    using Array::Array; 
//
//    virtual void add(const Array& other) override {
//        size_t minSize = min(getSize(), other.getSize());
//        for (size_t i = 0; i < minSize; i++) {
//            getArray()[i] += other.getArray()[i] * other.getArray()[i];
//        }
//    }
//};
//
//int main() {
//    Array a1(5, 1); 
//    DoubleArray a2(5, 2);
//    SquareArray a3(5, 3);
//
//    cout << "Initial Arrays:" << endl;
//    cout << "a1: "; a1.print(); 
//    cout << "a2: "; a2.print(); 
//
//    a1.add(a2); 
//    cout << "After Adding DoubleArray to Array:" << endl;
//    cout << "a1: "; a1.print(); 
//
//    a2.add(a3); 
//    cout << "After Adding SquareArray to DoubleArray:" << endl;
//    cout << "a2: "; a2.print(); 
//
//    a3.add(a1); // Square + Base
//    cout << "After Adding Array to SquareArray:" << endl;
//    cout << "a3: "; a3.print(); 
//
//    return 0;
//}


//task 2
#include <iostream>
#include <cmath>

using namespace std;

class Figure {
public:
    
    virtual double area() const = 0;

    virtual double perimeter() const = 0;
};

class Rectangle : public Figure {
private:
    double length;
    double width;  

public:
    
    Rectangle(double l, double w) : length(l), width(w) {}

    virtual double area() const override {
        return length * width;
    }

    virtual double perimeter() const override {
        return 2 * (length + width);
    }
};


class Circle : public Figure {
private:
    double radius; 

public:
    Circle(double r) : radius(r) {}

    virtual double area() const override {
        return 3,14 * radius * radius; 
    }

  
    virtual double perimeter() const override {
        return 2 * 3,14 * radius; 
    }
};

class Trapezium : public Figure {
private:
    double a;
    double b; 
    double h; 

public:
   
    Trapezium(double biggerBase, double smallerBase, double height) : a(biggerBase), b(smallerBase), h(height) {}

 
    virtual double area() const override {
        return (a + b) * h / 2;
    }

    virtual double perimeter() const override {
        return a + b + 2 * sqrt((h * h) + (((a - b) / 2) * ((a - b) / 2))); // a + b + 2 * √(h^2 + ((a - b)/2)^2)
    }
};

int main() {

    double lengthRect, widthRect;
    cout << "Enter the length of the rectangle: ";
    cin >> lengthRect;
    cout << "Enter the width of the rectangle: ";
    cin >> widthRect;

  
    Rectangle rect(lengthRect, widthRect);

    double radiusCircle;
    cout << "Enter the radius of the circle: ";
    cin >> radiusCircle;

    Circle circle(radiusCircle);

  
    double biggerBaseTrapezium, smallerBaseTrapezium, heightTrapezium;
    cout << "Enter the bigger base of the trapezium: ";
    cin >> biggerBaseTrapezium;
    cout << "Enter the smaller base of the trapezium: ";
    cin >> smallerBaseTrapezium;
    cout << "Enter the height of the trapezium: ";
    cin >> heightTrapezium;

    
    Trapezium trapezium(biggerBaseTrapezium, smallerBaseTrapezium, heightTrapezium);

    cout << endl << "Rectangle:" << endl;
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;

    cout << endl << "Circle:" << endl;
    cout << "Area: " << circle.area() << endl;
    cout << "Perimeter: " << circle.perimeter() << endl;

    cout << endl << "Trapezium:" << endl;
    cout << "Area: " << trapezium.area() << endl;
    cout << "Perimeter: " << trapezium.perimeter() << endl;

//
//using namespace std;
//
//class Currency {
//public:
//    
//    virtual double toRubles(double amount) const = 0;
//
//    virtual void display(double amount) const = 0;
//};
//
//class Dollar : public Currency {
//public:
//
//    virtual double toRubles(double amount) const override {
//        return amount * 88; 
//    }
//
//  
//    virtual void display(double amount) const override { 
//        cout << "$" << amount;
//    }
//};
//
//
//class Euro : public Currency {
//public:
//    virtual double toRubles(double amount) const override {
//        return amount * 100; 
//    }
//
//   
//    virtual void display(double amount) const override {
//        cout << "ˆ" << amount;
//    }
//};
//
//int main() {
//    double amount;
//    cout << "Enter the amount in dollars: ";
//    cin >> amount;
//
//    Dollar dollar;
//    cout << "Amount in dollars: ";
//    dollar.display(amount);
//    cout << endl;
//
//    cout << "Amount in rubles: " << dollar.toRubles(amount) << " RUB" << endl;
//
//    cout << "\nEnter the amount in euros: ";
//    cin >> amount;
//
//    Euro euro;
//    cout << "Amount in euros: ";
//    euro.display(amount);
//    cout << endl;
//
//    cout << "Amount in rubles: " << euro.toRubles(amount) << " RUB" << endl;
//
//    return 0;
//}