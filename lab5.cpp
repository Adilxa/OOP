//task 1
//
//#include <iostream>
//#include <stdexcept>
//#include <climits> // For INT_MIN and INT_MAX
//
//using namespace std;
//
//class Int {
//private:
//    int value;
//
//public:
//    Int(int value) : value(value) {}
//
//    Int operator+(const Int& other) const {
//        long long result = static_cast<long long>(value) + static_cast<long long>(other.value);
//        if (result > INT_MAX || result < INT_MIN) {
//            throw overflow_error("Overflow occurred");
//        }
//        return Int(static_cast<int>(result));
//    }
//
//    Int operator-(const Int& other) const {
//        long long result = static_cast<long long>(value) - static_cast<long long>(other.value);
//        if (result > INT_MAX || result < INT_MIN) {
//            throw overflow_error("Overflow occurred");
//        }
//        return Int(static_cast<int>(result));
//    }
//
//    Int operator*(const Int& other) const {
//        long long result = static_cast<long long>(value) * static_cast<long long>(other.value);
//        if (result > INT_MAX || result < INT_MIN) {
//            throw overflow_error("Overflow occurred");
//        }
//        return Int(static_cast<int>(result));
//    }
//
//    Int operator/(const Int& other) const {
//        if (other.value == 0) {
//            throw invalid_argument("Division by zero");
//        }
//        return Int(value / other.value);
//    }
//
//    // Unary operators
//    Int operator-() const {
//        long long result = -static_cast<long long>(value);
//        if (result > INT_MAX || result < INT_MIN) {
//            throw overflow_error("Overflow occurred");
//        }
//        return Int(static_cast<int>(result));
//    }
//
//    Int operator++() {
//        if (value == INT_MAX) {
//            throw overflow_error("Overflow occurred");
//        }
//        ++value;
//        return *this;
//    }
//
//    Int operator++(int) {
//        Int temp = *this;
//        if (value == INT_MAX) {
//            throw overflow_error("Overflow occurred");
//        }
//        ++value;
//        return temp;
//    }
//
//    Int operator--() {
//        if (value == INT_MIN) {
//            throw overflow_error("Overflow occurred");
//        }
//        --value;
//        return *this;
//    }
//
//    Int operator--(int) {
//        Int temp = *this;
//        if (value == INT_MIN) {
//            throw overflow_error("Overflow occurred");
//        }
//        --value;
//        return temp;
//    }
//
//    friend ostream& operator<<(ostream& os, const Int& obj) {
//        return os << obj.value;
//    }
//};
//
//int main() {
//    while (true) {
//        int taskChoice;
//        cout << "Choose a task:" << endl;
//        cout << "1. Binary operators (+, -, *, /)" << endl;
//        cout << "2. Unary operators (-, ++, --)" << endl;
//        cout << "0. Exit" << endl;
//        cout << "Your choice: ";
//        cin >> taskChoice;
//
//        switch (taskChoice) {
//            case 1:
//                try {
//                    int choice;
//                    int x, y;
//
//                    cout << "Choose an operation:" << endl;
//                    cout << "1. +" << endl;
//                    cout << "2. -" << endl;
//                    cout << "3. *" << endl;
//                    cout << "4. /" << endl;
//                    cout << "0. Exit" << endl;
//                    cout << "Your choice: ";
//                    cin >> choice;
//
//                    if (choice == 0) {
//                        cout << "Exiting program" << endl;
//                        break;
//                    }
//
//                    cout << "Enter two integers: ";
//                    cin >> x >> y;
//
//                    Int a(x);
//                    Int b(y);
//                    Int result(0);
//
//                    switch (choice) {
//                        case 1: // +
//                            result = a + b;
//                            cout << "Sum: " << result << endl;
//                            break;
//                        case 2: // -
//                            result = a - b;
//                            cout << "Difference: " << result << endl;
//                            break;
//                        case 3: // *
//                            result = a * b;
//                            cout << "Product: " << result << endl;
//                            break;
//                        case 4: // "/"
//                            result = a / b;
//                            cout << "Quotient: " << result << endl;
//                            break;
//                        default:
//                            cout << "Invalid operation choice" << endl;
//                    }
//                } catch (const overflow_error& e) {
//                    cout << "Overflow error: " << e.what() << endl;
//                } catch (const invalid_argument& e) {
//                    cout << "Error: " << e.what() << endl;
//                }
//                break;
//            case 2:
//                try {
//                    int choice;
//                    int x;
//
//                    cout << "Choose an operation:" << endl;
//                    cout << "1. Unary -" << endl;
//                    cout << "2. Unary ++ (Prefix)" << endl;
//                    cout << "3. Unary -- (Prefix)" << endl;
//                    cout << "4. Unary ++ (Postfix)" << endl;
//                    cout << "5. Unary -- (Postfix)" << endl;
//                    cout << "0. Exit" << endl;
//                    cout << "Your choice: ";
//                    cin >> choice;
//
//                    if (choice == 0) {
//                        cout << "Exiting program" << endl;
//                        break;
//                    }
//
//                    cout << "Enter an integer: ";
//                    cin >> x;
//
//                    Int a(x);
//                    Int result(0);
//
//                    switch (choice) {
//                        case 1: // Unary -
//                            result = -a;
//                            cout << "Unary -: " << result << endl;
//                            break;
//                        case 2: // Unary ++ (Prefix)
//                            result = ++a;
//                            cout << "Unary ++ (Prefix): " << result << endl;
//                            break;
//                        case 3: // Unary -- (Prefix)
//                            result = --a;
//                            cout << "Unary -- (Prefix): " << result << endl;
//                            break;
//                        case 4: // Unary ++ (Postfix)
//                            result = a++;
//                            cout << "Unary ++ (Postfix): " << result << endl;
//                            break;
//                        case 5: // Unary -- (Postfix)
//                            result = a--;
//                            cout << "Unary -- (Postfix): " << result << endl;
//                            break;
//                        default:
//                            cout << "Invalid operation choice" << endl;
//                    }
//                } catch (const overflow_error& e) {
//                    cout << "Overflow error: " << e.what() << endl;
//                }
//                break;
//            case 0:
//                cout << "Exiting program" << endl;
//                return 0;
//            default:
//                cout << "Invalid task choice" << endl;
//        }
//    }
//
//    return 0;
//}
//end of task1



//task2 

//#include <iostream>
//using namespace std;
//
//class Fraction {
//private:
//    double chislo;
//public:
//    Fraction() : chislo(0) {}
//    Fraction(double value) : chislo(value) {}
//    Fraction operator+(const Fraction& other) const {
//        return Fraction(chislo + other.chislo);
//    }
//    Fraction operator+(double value) const {
//        return Fraction(chislo + value);
//    }
//    Fraction operator-(const Fraction& other) const {
//        return Fraction(chislo - other.chislo);
//    }
//    Fraction operator-(double value) const {
//        return Fraction(chislo - value);
//    }
//    Fraction operator*(const Fraction& other) const {
//        return Fraction(chislo * other.chislo);
//    }
//    Fraction operator*(double value) const {
//        return Fraction(chislo * value);
//    }
//    Fraction operator/(const Fraction& other) const {
//        if (other.chislo == 0) {
//            cerr << "Division by zero!" << endl;
//            return *this;
//        }
//        return Fraction(chislo / other.chislo);
//    }
//    Fraction operator/(double value) const {
//        if (value == 0) {
//            cerr << "Division by zero!" << endl;
//            return *this;
//        }
//        return Fraction(chislo / value);
//    }
//    Fraction operator++(int) {
//        Fraction temp(*this);
//        chislo++;
//        return temp;
//    }
//    Fraction& operator++() {
//        chislo++;
//        return *this;
//    }
//    friend ostream& operator<<(ostream& os, const Fraction& frac) {
//        os << frac.chislo;
//        return os;
//    }
//    friend Fraction operator*(int value, const Fraction& frac) {
//        return Fraction(value * frac.chislo);
//    }
//};
//
//int main() {
//    double num1, num2;
//    char operation;
//    
//    cout << "Enter the first number: ";
//    cin >> num1;
//    cout << "Enter the operation (+, -, *, /): ";
//    cin >> operation;
//    cout << "Enter the second number: ";
//    cin >> num2;
//    
//    Fraction f1(num1);
//    Fraction f2(num2);
//    Fraction result;
//    
//    switch (operation) {
//    case '+':
//        result = f1 + f2;
//        break;
//    case '-':
//        result = f1 - f2;
//        break;
//    case '*':
//        result = f1 * f2;
//        break;
//    case '/':
//        result = f1 / f2;
//        break;
//    default:
//        cerr << "Invalid operation!" << endl;
//        return 1;
//    }
//    
//    cout << "Result: " << result << endl;
//    
//    return 0;
//}

//end of task 2


//task 3

//#include <iostream>
//#include <limits> 
//
//using namespace std;
//
//class Rectangle {
//private:
//    double a;
//    double b;
//
//public:
//    Rectangle(double side1, double side2) : a(side1), b(side2) {}
//
//    double area() {
//        return a * b;
//    }
//
//    double area(double side) {
//        return side * side;
//    }
//};
//
//int main() { // Add main function
//    double side1, side2;
//
//    cout << "Enter the sides: ";
//    cin >> side1;
//
//    if (cin.peek() == '\n') {
//        Rectangle square(side1, side1);
//        double area = square.area(side1);
//        cout << "Area of the square: " << area << endl;
//    }
//    else {
//        cin >> side2;
//        Rectangle rectangle(side1, side2);
//        double area = rectangle.area();
//        cout << "Area of the rectangle: " << area << endl;
//    }
//
//
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');
//
//    return 0;
//}

//end of task3