#include <iostream>
#include <ctime>

using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

bool isLeap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int monthLength(int year, int month) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && isLeap(year)) {
        return 29;
    } else {
        return daysInMonth[month - 1];
    }
}

Date today() {
    time_t t = time(NULL);
    tm *localTime = localtime(&t);

    Date currentDate;
    currentDate.year = localTime->tm_year + 1900;
    currentDate.month = localTime->tm_mon + 1;
    currentDate.day = localTime->tm_mday;

    return currentDate;
}

int daysBetweenDates(Date birthDate, Date currentDate) {
    int days = 0;

    for (int month = birthDate.month + 1; month <= 12; month++) {
        days += monthLength(birthDate.year, month);
    }
    days += monthLength(birthDate.year, birthDate.month) - birthDate.day;

    for (int year = birthDate.year + 1; year < currentDate.year; year++) {
        days += (isLeap(year)) ? 366 : 365;
    }

    for (int month = 1; month < currentDate.month; month++) {
        days += monthLength(currentDate.year, month);
    }
    days += currentDate.day;

    return days;
}

int main() {
    Date birthDate = {2004, 11, 13};
    Date currentDate = today();

    int days = daysBetweenDates(birthDate, currentDate);

    cout << "Кількість днів з дня народження до поточної дати: " << days << endl;

    return 0;
}
