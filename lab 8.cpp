#include <iostream>
#include <algorithm> 
using namespace std;

template<typename T>
class ArrayUtility {
public:
    static T findMax(const T arr[], int size) {
        T maxElement = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] > maxElement) {
                maxElement = arr[i];
            }
        }
        return maxElement;
    }

    static void sortArray(T arr[], int size) {
        sort(arr, arr + size);
    }
};

template<typename T>
void inputArray(T arr[], int size) {
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
}

template<typename T>
void printArray(const T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;


    int* intArray = new int[size];
    double* doubleArray = new double[size];
    char* charArray = new char[size];


    cout << "Enter an integer array:" << endl;
    inputArray(intArray, size);

    cout << "Enter an array of real numbers:" << endl;
    inputArray(doubleArray, size);

    cout << "Enter an array of characters:" << endl;
    inputArray(charArray, size);


    cout << "Maximum element in the integer array: " << ArrayUtility<int>::findMax(intArray, size) << endl;
    cout << "Sorted integer array: ";
    ArrayUtility<int>::sortArray(intArray, size);
    printArray(intArray, size);

    cout << "Maximum element in the array of real numbers: " << ArrayUtility<double>::findMax(doubleArray, size) << endl;
    cout << "Sorted array of real numbers: ";
    ArrayUtility<double>::sortArray(doubleArray, size);
    printArray(doubleArray, size);

    cout << "Maximum element in the array of characters: " << ArrayUtility<char>::findMax(charArray, size) << endl;
    cout << "Sorted array of characters: ";
    ArrayUtility<char>::sortArray(charArray, size);
    printArray(charArray, size);

    delete[] intArray;
    delete[] doubleArray;
    delete[] charArray;

    return 0;
}

//task 2
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//template<typename T, typename U, int Size>
//class ArrayPair {
//private:
//    T array1[Size];
//    U array2[Size];
//
//public:
//    ArrayPair() {
//        srand(time(nullptr));
//        for (int i = 0; i < Size; ++i) {
//            array1[i] = static_cast<T>(rand() % 100);
//            array2[i] = static_cast<U>(rand() % 100);
//        }
//    }
//
//    double sum() const {
//        double total = 0;
//        for (int i = 0; i < Size; ++i) {
//            total += array1[i] + array2[i];
//        }
//        return total;
//    }
//};
//
//int main() {
//    srand(time(nullptr));
//
//    ArrayPair<int, double, 5> intDoublePair;
//    ArrayPair<double, float, 7> doubleFloatPair;
//
//    cout << "Sum of elements of arrays int and double: " << intDoublePair.sum() << endl;
//    cout << "Sum of elements of arrays double and float: " << doubleFloatPair.sum() << endl;
//
//    return 0;
//}

//task 3
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//const int MAX_SIZE = 100;
//template<typename T>
//class Stack {
//private:
//    T elements[MAX_SIZE];
//    int top;
//
//public:
//    Stack() : top(-1) {}
//
//    void push(const T& element) {
//        if (top == MAX_SIZE - 1) {
//            cerr << "Stack overflow!" << endl;
//            exit(1);
//        }
//        elements[++top] = element;
//    }
//
//    T pop() {
//        if (isEmpty()) {
//            cerr << "Stack underflow!" << endl;
//            exit(1);
//        }
//        return elements[top--];
//    }
//
//    bool isEmpty() const {
//        return top == -1;
//    }
//
//    int size() const {
//        return top + 1;
//    }
//};
//
//struct Employee {
//    string surname;
//    int age;
//    string specialization;
//    double salary;
//};
//
//int main() {
//    int numFactories;
//    cout << "Enter the number of factories: ";
//    cin >> numFactories;
//
//    Stack<Employee> employeesStack;
//    int totalLocksmiths = 0;
//    int totalTurners = 0;
//
//    for (int i = 0; i < numFactories; ++i) {
//        int numEmployees;
//        cout << "Enter the number of employees at factory " << i + 1 << ": ";
//        cin >> numEmployees;
//
//        for (int j = 0; j < numEmployees; ++j) {
//            Employee employee;
//            cout << "Enter information for employee #" << j + 1 << " at factory " << i + 1 << ":" << endl;
//            cout << "Surname: ";
//            cin >> employee.surname;
//            cout << "Age: ";
//            cin >> employee.age;
//            cout << "Specialization: ";
//            cin >> employee.specialization;
//            cout << "Salary: ";
//            cin >> employee.salary;
//
//            employeesStack.push(employee);
//            if (employee.specialization == "locksmith") {
//                totalLocksmiths++;
//            }
//            else if (employee.specialization == "turner") {
//                totalTurners++;
//            }
//        }
//    }
//
//    cout << "Total number of locksmiths: " << totalLocksmiths << endl;
//    cout << "Total number of turners: " << totalTurners << endl;
//
//    return 0;
//}

