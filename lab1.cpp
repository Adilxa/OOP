//#include <iostream>
//#include <cmath>
//
//double power(double n, int p = 2);
//using namespace std;
//
//
//int main() {
//    double base;
//    int exponent;
//    
//    cout << "Enter the base number: ";
//    cin >> base;
//
//
//    cout << "Do you want to enter the exponent? (1 for yes, 0 for no): ";
//    int choice;
//    cin >> choice;
//
//    if (choice == 1) {
//        cout << "Enter the exponent: ";
//        cin >> exponent;
//    } else {
//        exponent = 2; 
//    }
//	double result = power(base, exponent);
//    cout << "Result: " << result << endl;
//
//    return 0;
//}
//
//double power(double n, int p) {
//    return pow(n, p);
//}


//2
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//double power(double n, int p = 2);
//double power(const char* n, int p = 2);
//double power(short int n, int p = 2);
//double power(long int n, int p = 2);
//double power(float n, int p = 2);
//
//int main() {
//	
//    const char* charNum = "5";
//    
//    const double doubleNum = 2.5;
//    const float piNum = 3.14;
//    const long largeInt = 123456;
//    const short smallInt = 12345;
//    
//
//    cout<<static_cast<double>(*charNum)<<endl;
//    
//    cout << "Double power: " << power(doubleNum) << endl;
//    cout << "Char power: " << power(charNum) << endl; 
//    cout << "Short int power: " << power(smallInt) << endl;
//    cout << "Long int power: " << power(largeInt) << endl;
//    cout << "Float power: " << power(piNum) << endl;
//
//    return 0;
//}
//
//double power(double n, int p) {
//    return pow(n, p);
//}
//
//double power(const char* n, int p) {
//    return pow(static_cast<double>(*n), p);  
//}
//
//double power(short int n, int p) {
//    return pow(static_cast<double>(n), p);
//}
//
//double power(long int n, int p) {
//    return pow(static_cast<double>(n), p);
//}
//
//double power(float n, int p) {
//    return pow(static_cast<double>(n), p);
//}

//3
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//struct Employee {
//    string lastName;
//    int age;
//    string specialty;
//    double avgSalary;
//};
//
//int main(int argc, char* argv[]) {
//    int n;
//    cout << "Enter the number of employees: ";
//    cin >> n;
//
//    int mechanics_count = 0;
//    int turners_count = 0;
//
//    auto* employees = new Employee[n];
//
//    for (int i = 0; i < n; ++i) {
//        cout << "Enter information for employee " << i + 1 << ":" << endl;
//        cout << "Last name: ";
//        cin >> employees[i].lastName;
//        cout << "Age: ";
//        cin >> employees[i].age;
//        cout << "Specialty: ";
//        cin >> employees[i].specialty;
//        cout << "Average salary: ";
//        cin >> employees[i].avgSalary;
//
//        if (employees[i].specialty == "mechanic") {
//            mechanics_count++;
//        } else if (employees[i].specialty == "turner") {
//            turners_count++;
//        }
//    }
//
//    cout << "Number of mechanics: " << mechanics_count << endl;
//    cout << "Number of turners: " << turners_count << endl;
//
//    delete[] employees;
//
//    return 0;
//}



