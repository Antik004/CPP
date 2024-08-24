#include <iostream>
using namespace std;

class Time {
public:
    int day;
    int hrs;
    int min;
    int sec;
};

Time calculator(Time k) {
    if (k.hrs >= 24) {
        k.day += k.hrs / 24;
        k.hrs = k.hrs % 24;
    }
    if (k.min >= 60) {
        k.hrs += k.min / 60;
        k.min = k.min % 60;
    }
    if (k.sec >= 60) {
        k.min += k.sec / 60;
        k.sec = k.sec % 60;
    }
    return k;
}

int main() {
    Time j = {0, 0, 0, 0};
    Time k = {0, 0, 0, 0}; // Initialize day to 0
    cout << "Enter time" << endl;
    cout << "Enter hours" << endl;
    cin >> k.hrs;
    cout << "Enter minutes" << endl;
    cin >> k.min;
    cout << "Enter seconds" << endl;
    cin >> k.sec;

    k = calculator(k);

    cout << "Enter time" << endl;
    cout << "Enter hours" << endl;
    cin >> j.hrs;
    cout << "Enter minutes" << endl;
    cin >> j.min;
    cout << "Enter seconds" << endl;
    cin >> j.sec;

    j = calculator(j);

    Time add = {0, 0, 0, 0};
    Time diff = {0, 0, 0, 0};
    add = calculator({k.day + j.day, k.hrs + j.hrs, k.min + j.min, k.sec + j.sec});
    diff = calculator({k.day - j.day, k.hrs - j.hrs, k.min - j.min, k.sec - j.sec});

    cout << add.day << " days " << add.hrs << " hrs " << add.min << " min " << add.sec << " sec " << endl;
    cout << diff.day << " days " << diff.hrs << " hrs " << diff.min << " min " << diff.sec << " sec " << endl;

    return 0;
}
