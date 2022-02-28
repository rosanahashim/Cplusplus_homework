#include <iostream>
#include <string>

using namespace std;

class HeartRates {
private:
    string fn;
    string ln;
    int day;
    int month;
    int year;
public:
    HeartRates(string fn, string ln, int day, int month, int year) : fn(fn), ln(ln), day(day), month(month), year(year) {}

    void setFirstName(string inputFN) {
        fn = inputFN;
    }

    void setLastname(string inputLN) {
        ln = inputLN;
    }

    void setDay(int inputDay) {
        day = inputDay;
    }

    void setYear(int inputYear) {
        year = inputYear;
    }

    void setMonth(int inputMonth) {
        month = inputMonth;
    }

    string getFirstName() {
        return fn;
    }

    string getLastName() {
        return ln;
    }

};



int main() {
   cout << "Hello, world" << endl;
}
