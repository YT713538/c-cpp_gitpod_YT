#include <iostream>
using namespace std;

int main(void) {
    int year;
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)) {
        cout << year << " 润年" << endl;
    } else {
        cout << year << " 平年" << endl;
    }

    return 0;
}
