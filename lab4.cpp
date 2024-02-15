#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Tatra;

class Kamaz {
private:
    string name;
    int speed_plain;
    int speed_mountains;
    int speed_desert;
public:
    Kamaz(string n, int sp, int sm, int sd) : name(n), speed_plain(sp), speed_mountains(sm), speed_desert(sd) {}
    void display() {
        cout << setw(10) << name << setw(10) << speed_plain << setw(10) << speed_mountains << setw(10) << speed_desert << endl;
    }
    friend int FrCreater(const Kamaz &k, const Tatra &t);
    friend class Tatra;
};

class Tatra {
private:
    string name;
    int speed_plain;
    int speed_mountains;
    int speed_desert;
public:
    Tatra(string n, int sp, int sm, int sd) : name(n), speed_plain(sp), speed_mountains(sm), speed_desert(sd) {}
    void display() {
        cout << setw(10) << name << setw(10) << speed_plain << setw(10) << speed_mountains << setw(10) << speed_desert << endl;
    }
    friend int FrCreater(const Kamaz &k, const Tatra &t);
    friend class Kamaz;
};

int FrCreater(const Kamaz &k, const Tatra &t) {
    int k_avg_speed = (k.speed_plain + k.speed_mountains + k.speed_desert) / 3;
    int t_avg_speed = (t.speed_plain + t.speed_mountains + t.speed_desert) / 3;

    if (k_avg_speed > t_avg_speed) return 1;
    else if (k_avg_speed == t_avg_speed) return 0;
    else return -1;
}

int main() {
    Kamaz kamaz("Kamaz", 100, 80, 120);
    Tatra tatra("Tatra", 90, 70, 110);

    cout << setw(10) << "Truck" << setw(10) << "Plain" << setw(10) << "Mountains" << setw(10) << "Desert" << endl;

    kamaz.display();
    tatra.display();

    int result = FrCreater(kamaz, tatra);
    if (result > 0) cout << "Kamaz wins!" << endl;
    else if (result < 0) cout << "Tatra wins!" << endl;
    else cout << "It's a tie!" << endl;

    return 0;
}
