// #include<iostream>
// #include<iomanip>
// using namespace std;

// class Aerflot
// {
// public:
//     short int NumOfFlight;
//     string DepartP; 
//     string DestinP; 
//     string DestinT;
//     string DepartT;
//     int RegistNum;


//     void setFlights(short int NOfF, string DpP, string DsP,
//         string DsT, string DpT, int RegNum)
//     {
//         NumOfFlight = NOfF;
//         DepartP = DpP;
//         DestinP = DsP;
//         DestinT = DsT;
//         DepartT = DpT;
//         RegistNum = RegNum;
//     }


//     void showFlights()
//     {
//         cout << left << setw(15) << NumOfFlight
//             << left << setw(20) << DepartP
//             << left << setw(20) << DestinP
//             << left << setw(15) << DestinT
//             << left << setw(15) << DepartT
//             << left << setw(15) << RegistNum << endl;
//     }
// };

// int main()
// {
//     setlocale(LC_ALL, "Russian");
//     int quanOfFlights;
//     cout << "Введите количество рейсов: ";
//     cin >> quanOfFlights;

//     Aerflot* flights = new Aerflot[quanOfFlights];
//     for (int i = 0; i < quanOfFlights; ++i)
//     {
//         cout << "Введите информацию о рейсе #" << i + 1 << endl;
//         cout << "Номер рейса: ";
//         cin >> flights[i].NumOfFlight;
//         cout << "Пункт отправления: ";
//         cin >> flights[i].DepartP;
//         cout << "Пункт назначения: ";
//         cin >> flights[i].DestinP;
//         cout << "Время отправления: ";
//         cin >> flights[i].DestinT;
//         cout << "Время прибытия: ";
//         cin >> flights[i].DepartT;
//         cout << "Регистрационный номер: ";
//         cin >> flights[i].RegistNum;
//     }

//     for (int i = 0; i < quanOfFlights - 1; ++i)
//     {
//         for (int j = i + 1; j < quanOfFlights; ++j)
//         {
//             if (flights[i].DestinP > flights[j].DestinP)
//             {
//                 swap(flights[i], flights[j]);
//             }
//         }
//     }

//     cout << left << setw(15) << "Номер рейса "
//         << left << setw(20) << "Пункт отправления "
//         << left << setw(20) << "Пункт назначения "
//         << left << setw(15) << "Время отправления "
//         << left << setw(15) << "Время прибытия "
//         << left << setw(15) << "Регистрационный номер" << endl;

//     for (int i = 0; i < quanOfFlights; ++i)
//     {
//         flights[i].showFlights();
//     }

//     delete[] flights;

//     return 0;
// }


//task 2
// #include <iostream>
// #include <iomanip>
// #include <algorithm>
// #include <locale>

// using namespace std;

// class Student
// {
// public:
//     string Surname;
//     string Name;
//     string DateOfBirth;
//     string PhoneNumber;

//     void setStudent(string SN, string N, string DB, string PN)
//     {
//         Surname = SN;
//         Name = N;
//         DateOfBirth = DB;
//         PhoneNumber = PN;
//     }

//     void showStudent() const
//     {
//         cout << left << setw(20) << Surname
//              << left << setw(15) << Name
//              << left << setw(20) << DateOfBirth
//              << left << setw(15) << PhoneNumber << endl;
//     }
// };

// class StudentGroup
// {
// private:
//     const int maxSize = 100;
//     Student students[100];
//     int numberOfStudents;

// public:
//     StudentGroup() : numberOfStudents(0) {}

//     void addStudent(const Student &newStudent)
//     {
//         if (numberOfStudents < maxSize)
//         {
//             students[numberOfStudents++] = newStudent;
//         }
//         else
//         {
//             cout << "Ошибка списка, нельзя добавить нового студента." << endl;
//         }
//     }

//     void removeStudent(const string &surname)
//     {
//         Student *it = nullptr;

//         for (Student *i = students; i != students + numberOfStudents; ++i)
//         {
//             if (i->Surname == surname)
//             {
//                 it = i;
//                 break;
//             }
//         }

//         if (it != nullptr)
//         {
//             *it = students[--numberOfStudents];
//         }
//         else
//         {
//             cout << "Студент с фамилией " << surname << " не найден." << endl;
//         }
//     }

//     Student findStudentBySurname(const string &surname) const
//     {
//         const Student *it = nullptr;

//         for (const Student *i = students; i != students + numberOfStudents; ++i)
//         {
//             if (i->Surname == surname)
//             {
//                 it = i;
//                 break;
//             }
//         }

//         if (it != nullptr)
//         {
//             return *it;
//         }
//         else
//         {
//             return Student{};
//         }
//     }

//     void sortStudentsBySurname()
//     {
//         sort(students, students + numberOfStudents,
//              [](const Student &a, const Student &b) {
//                  return a.Surname < b.Surname;
//              });
//     }

//     void displayAllStudents() const
//     {
//         cout << left << setw(20) << "Фамилия"
//              << left << setw(15) << "Имя"
//              << left << setw(20) << "Дата рождения "
//              << left << setw(15) << " Номер телефона" << endl;

//         for (int i = 0; i < numberOfStudents; ++i)
//         {
//             students[i].showStudent();
//         }
//     }
// };

// void printMenu()
// {
//     cout << "Меню:" << endl;
//     cout << "1. Добавить студента" << endl;
//     cout << "2. Удалить студента" << endl;
//     cout << "3. Поиск студента по фамилии" << endl;
//     cout << "4. Сортировка студентов по фамилии" << endl;
//     cout << "5. Показать всех студентов" << endl;
//     cout << "0. Выход" << endl;
//     cout << "Выберите действие: ";
// }

// int main()
// {

//     StudentGroup group;

//     while (true)
//     {
//         printMenu();

//         int choice;
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//         {
//             cout << "Введите данные о студенте:" << endl;
//             string surname, name, dateOfBirth, phoneNumber;
//             cout << "Фамилия: ";
//             cin >> surname;
//             cout << "Имя: ";
//             cin >> name;
//             cout << "Дата рождения: ";
//             cin >> dateOfBirth;
//             cout << "Номер телефона: ";
//             cin >> phoneNumber;

//             Student newStudent;
//             newStudent.setStudent(surname, name, dateOfBirth, phoneNumber);
//             group.addStudent(newStudent);
//             break;
//         }
//         case 2:
//         {
//             cout << "Введите фамилию студента для удаления: ";
//             string surname;
//             cin >> surname;
//             group.removeStudent(surname);
//             break;
//         }
//         case 3:
//         {
//             cout << "Введите фамилию студента для поиска: ";
//             string surname;
//             cin >> surname;

//             Student foundStudent = group.findStudentBySurname(surname);
//             if (!foundStudent.Surname.empty())
//             {
//                 cout << "\nНайден студент:\n";
//                 foundStudent.showStudent();
//             }
//             else
//             {
//                 cout << "Студент с фамилией " << surname << " не найден." << endl;
//             }
//             break;
//         }
//         case 4:
//             group.sortStudentsBySurname();
//             cout << "Студенты отсортированы по фамилии." << endl;
//             break;
//         case 5:
//             group.displayAllStudents();
//             break;
//         case 0:
//             cout << "Выход из программы." << endl;
//             return 0;
//         default:
//             cout << "Некорректный ввод. Пожалуйста, выберите заново." << endl;
//             break;
//         }
//     }

//     return 0;
// }
//task 3 
// #include <iostream>
// #include <fstream>
// #include <stack>
// #include <vector>

// using namespace std;

// // Класс для представления вагона
// class Wagon {
// public:
//     int type;  // Тип вагона: 0 или 1

//     Wagon(int t) : type(t) {}
// };

// // Класс для сортировки и вывода информации о вагонах
// class SortingNode {
// private:
//     stack<Wagon> mainTrack;    // Основная дорожка
//     stack<Wagon> sideTrack;    // Боковая дорожка

// public:
//     // Метод для добавления вагона на основную дорожку
//     void addToMainTrack(const Wagon& wagon) {
//         mainTrack.push(wagon);
//         cout << "Добавлен вагон типа " << wagon.type << " на основную дорожку." << endl;
//     }

//     // Метод для сортировки вагонов
//     void sortWagons() {
//         while (!mainTrack.empty()) {
//             Wagon currentWagon = mainTrack.top();
//             mainTrack.pop();

//             if (currentWagon.type == 0) {
//                 cout << "Вагон типа 0 направлен на боковую дорожку." << endl;
//                 sideTrack.push(currentWagon);
//             }
//             else {
//                 cout << "Вагон типа 1 направлен на основную дорожку." << endl;
//             }
//         }
//     }

//     // Метод для вывода информации о вагонах на боковой дорожке
//     void printSideTrack() {
//         cout << "Информация о вагонах на боковой дорожке:" << endl;
//         while (!sideTrack.empty()) {
//             Wagon currentWagon = sideTrack.top();
//             sideTrack.pop();
//             cout << "Вагон типа " << currentWagon.type << endl;
//         }
//     }
// };

// int main() {
//     SortingNode sortingNode;

//     int numWagons;
//     cout << "Введите количество вагонов: ";
//     cin >> numWagons;

//     for (int i = 0; i < numWagons; ++i) {
//         int wagonType;
//         cout << "Введите тип вагона (0 или 1): ";
//         cin >> wagonType;

//         Wagon wagon(wagonType);
//         sortingNode.addToMainTrack(wagon);
//     }

//     sortingNode.sortWagons();
//     sortingNode.printSideTrack();

//     return 0;
// }

