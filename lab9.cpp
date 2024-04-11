//#include <iostream>
//#include <stdexcept> // For std::out_of_range
//using namespace std;
//
//const int LIMIT = 100;
//
//class ArrayIndexOutOfBoundsException : public exception {
//public:
//    const char* what() const noexcept override {
//        return "Error: index out of bounds!";
//    }
//};
//
//class safearray {
//private:
//    int arr[LIMIT];
//public:
//    void putel(int n, int elvalue) {
//        if (n < 0 || n >= LIMIT) {
//            throw ArrayIndexOutOfBoundsException();
//        }
//        arr[n] = elvalue;
//    }
//
//    int getel(int n) const {
//        if (n < 0 || n >= LIMIT) {
//            throw ArrayIndexOutOfBoundsException();
//        }
//        return arr[n];
//    }
//};
//
//int main() {
//    safearray sal;
//
//    try {
//        for (int j = 0; j < LIMIT; j++) {
//            sal.putel(j, j * 10);
//        }
//
//        for (int j = 0; j < LIMIT; j++) {
//            int temp = sal.getel(j);
//            cout << "Element " << j << " is " << temp << endl;
//        }
//
//        
//        sal.getel(200); 
//    }
//    catch (const ArrayIndexOutOfBoundsException& e) {
//        cout << e.what() << endl;
//    }
//
//    return 0;
//}


//task2
//#include <iostream>
//#include <string>
//#include <stdexcept> 
//using namespace std;
//
//class Kamaz;
//
//class Tatra {
//private:
//    string name;
//    int speed;
//public:
//    Tatra(string n, int s) : name(n), speed(s) {}
//
//    friend int FrCreater(const Kamaz& k, const Tatra& t);
//
//    void display() {
//        cout << "Truck " << name << ", speed: " << speed << " km/h" << endl;
//    }
//};
//
//class Kamaz {
//private:
//    string name;
//    int speed;
//public:
//    Kamaz(string n, int s) : name(n), speed(s) {}
//
//    friend int FrCreater(const Kamaz& k, const Tatra& t);
//
//    void display() {
//        cout << "Truck " << name << ", speed: " << speed << " km/h" << endl;
//    }
//};
//
//int FrCreater(const Kamaz& k, const Tatra& t) {
//    if (k.speed > t.speed)
//        return 1;
//    else if (k.speed < t.speed)
//        return -1;
//    else
//        return 0;
//}
//
//int main() {
//    try {
//        Kamaz kamaz("Kamaz", 80);
//        Tatra tatra("Tatra", 90);
//
//        cout << "Speed comparison:" << endl;
//        int result = FrCreater(kamaz, tatra);
//        if (result == 1)
//            cout << "Kamaz is faster than Tatra." << endl;
//        else if (result == -1)
//            cout << "Tatra is faster than Kamaz." << endl;
//        else
//            cout << "Speeds of Kamaz and Tatra are equal." << endl;
//
//        cout << "\nInformation about trucks:" << endl;
//        kamaz.display();
//        tatra.display();
//    }
//    catch (const exception& e) {
//        cout << "An error occurred: " << e.what() << endl;
//    }
//
//    return 0;
//}
