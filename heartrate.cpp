#include <iostream>
#include <string>
#include <ctime>


using namespace std;

class HeartRates {
private:
    
    string fn;
    string ln;
    int day;
    int month;
    int year;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int currentYear = 1900 + ltm -> tm_year;
    
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

    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear() {
        return year;
    }
    
    int getCurrentYear() {
        return currentYear;
    }
    
    int getAge() {
        return currentYear - year;
    }
    
    int getMaxHeartRate() {
        return 220 - getAge();
    }
    
    void targetHeartRate() {
        cout << getMaxHeartRate() * 0.5 << " - " << getMaxHeartRate() * 0.85;
    }

};



int main() {
    string fn, ln;
    int d, m, y;
    cout << "Enter firstname: ";
    cin >> fn;
    cout << "Enter lastname: ";
    cin >> ln;
    cout << "Enter day of birth: ";
    cin >> d;
    cout << "Enter month of birth: ";
    cin >> m;
    cout << "Enter year of birth: ";
    cin >> y;
    
    
    HeartRates myHeart(fn, ln, d, m , y);
    
    cout << "Heart Rate Information" << endl;
    cout << "Firstname is "  << myHeart.getFirstName() << endl;
    cout << "Lastname is " << myHeart.getLastName() << endl;
    cout << "Date of birth " << myHeart.getMonth() << "/" << myHeart.getDay() << "/" << myHeart.getYear() << endl;
    cout << "Age is: " << myHeart.getAge() << endl;
    cout << "Maximum Heart rate is: " <<  myHeart.getMaxHeartRate() << endl;
    cout << "Target Heart Rate is: "; myHeart.targetHeartRate(); cout << endl;


  
}
