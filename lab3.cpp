//#include <iostream>
//#include <string>
//#include <ctime>
//#include <chrono>
//#include <thread>
//
//using namespace std;
//
//class Timer {
//private:
//    int seconds;
//
//public:
//    Timer() : seconds(0) {}
//    Timer(int sec) : seconds(sec) {}
//    Timer(int min, int sec) : seconds(min * 60 + sec) {}
//
//    void run() {
//        time_t startTime = time(NULL);
//
//        cout << "Timer started" << endl;
//
//        while (time(NULL) - startTime < seconds) {
//            int remainingTime = seconds - (time(NULL) - startTime);
//            cout << "Remaining time: " << remainingTime << " seconds" << endl;
//            this_thread::sleep_for(chrono::seconds(1));
//        }
//    }
//
//    ~Timer() {
//        cout << "Timer finished" << endl;
//    }
//};
//
//int main() {
//    Timer timer;
//    cout << "1. In seconds\n";
//    cout << "2. In minutes and seconds\n";
//    int choice;
//    cin >> choice;
//
//    switch (choice) {
//    case 1: {
//        int sec;
//        cout << "Enter the time in seconds: ";
//        cin >> sec;
//        timer = Timer(sec);
//        break;
//    }
//    case 2: {
//        int min, sec;
//        cout << "Enter minutes and seconds: ";
//        cin >> min >> sec;
//        timer = Timer(min, sec);
//        break;
//    }
//    default:
//        cout << "Error" << endl;
//        return 1;
//    }
//
//    timer.run();
//
//    return 0;
//
//}
//Task 2
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Nomenclature {
//private:
//    string Product;
//    short int Price;
//    double RozNas;
//    int Quantity;
//
//public:
//    Nomenclature(string product, short int price, double roznas, int quantity)
//        : Product(product), Price(price), RozNas(roznas), Quantity(quantity) {}
//
//    ~Nomenclature() {
//        cout << "Object destroyed" << endl;
//    }
//
//    double calculateRetailPrice() {
//        return Price * (1 + RozNas / 100.0);
//    }
//
//    void displayProductDetails() {
//        cout << "Product Name: " << Product << endl;
//        cout << "Wholesale Price: " << Price << " units" << endl;
//        cout << "Retail Markup: " << RozNas << "%" << endl;
//        cout << "Quantity in Stock: " << Quantity << endl;
//        cout << "Retail Price: " << calculateRetailPrice() << " units" << endl;
//    }
//};
//
//// Function to input product details and display information
//void inputAndDisplayProductDetails() {
//    string product;
//    short int price;
//    double roznas;
//    int quantity;
//
//    cout << "Enter product name: ";
//    getline(cin, product);
//
//    cout << "Enter wholesale price: ";
//    cin >> price;
//
//    cout << "Enter retail markup (%): ";
//    cin >> roznas;
//
//    cout << "Enter quantity in stock: ";
//    cin >> quantity;
//
//    if (price <= 0 || roznas <= 0 || quantity <= 0) {
//        cout << "All values must be greater than zero" << endl;
//        return;
//    }
//
//    Nomenclature productObj(product, price, roznas, quantity);
//
//    cout << "\nProduct Details:" << endl;
//    productObj.displayProductDetails();
//}
//
//// Main function providing a menu for different tasks
//int main() {
//    char choice;
//
//    do {
//        cout << "\nSelect an option:" << endl;
//        cout << "1. Input and Display Product Details" << endl;
//        cout << "0. Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//            case '1':
//                cout << "\nInput and Display Product Details:" << endl;
//                cin.ignore(); // Clear the input buffer
//                inputAndDisplayProductDetails();
//                break;
//            case '0':
//                cout << "Exiting..." << endl;
//                break;
//            default:
//                cout << "Invalid choice. Please try again." << endl;
//                break;
//        }
//    } while (choice != '0');
//
//    return 0;
//}

//Task 3
//#include <iostream>
//#include <string>
//#include <chrono>
//#include <iomanip>
//
//using namespace std;
//
//class Soft {
//private:
//    string program;
//    string developer;
//    double size;
//    string date;
//    chrono::system_clock::time_point licenseDate;
//
//public:
//    Soft(string prog, string dev, double size, string date, chrono::system_clock::time_point license)
//        : program(prog), developer(dev), size(size), date(date), licenseDate(license) {}
//
//    ~Soft() {
//        cout << "Object destroyed!" << endl;
//    }
//
//    int daysUntilExpiration() const {
//        auto now = chrono::system_clock::now();
//        auto duration = chrono::duration_cast<chrono::hours>(licenseDate - now);
//        return duration.count() / 24;
//    }
//
//    void displaySoftwareInfo() {
//        struct tm tm = {};
//        sscanf(date.c_str(), "%2d-%2d-%4d", &tm.tm_mday, &tm.tm_mon, &tm.tm_year);
//        tm.tm_mon--;
//        tm.tm_year -= 1900;
//        licenseDate = chrono::system_clock::from_time_t(mktime(&tm));
//        cout << "Program Name: " << program << endl;
//        cout << "Developer: " << developer << endl;
//        cout << "Installed Size: " << size << " MB" << endl;
//        cout << "License Expiry Date: " << date << endl;
//        cout << "Days until License Expiration: " << daysUntilExpiration() << endl;
//    }
//};
//
//// Function to input software details and display information
//void inputAndDisplaySoftwareInfo() {
//    string prog;
//    string dev;
//    double size;
//    string date;
//
//    cout << "Enter program name: ";
//    cin >> prog;
//
//    cout << "Enter developer: ";
//    cin >> dev;
//
//    cout << "Enter installed size (in MB): ";
//    cin >> size;
//
//    cout << "Enter license expiry date (dd-mm-yyyy): ";
//    cin >> date;
//
//    Soft software(prog, dev, size, date, chrono::system_clock::now());
//
//    cout << "\nSoftware Information:" << endl;
//    software.displaySoftwareInfo();
//}
//
//// Main function providing a menu for different tasks
//int main() {
//    char choice;
//
//    do {
//        cout << "\nSelect an option:" << endl;
//        cout << "1. Input and Display Software Information" << endl;
//        cout << "0. Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//            case '1':
//                cout << "\nInput and Display Software Information:" << endl;
//                inputAndDisplaySoftwareInfo();
//                break;
//            case '0':
//                cout << "Exiting..." << endl;
//                break;
//            default:
//                cout << "Invalid choice. Please try again." << endl;
//                break;
//        }
//    } while (choice != '0');
//
//    return 0;
//}
//

