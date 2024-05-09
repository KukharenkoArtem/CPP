#include <iostream>
#include <ctime>

using namespace std;

// Структура, що представляє дату
struct Date {
    int year;
    int month;
    int day;
};

// Функція для перевірки, чи є рік високосним
bool isLeap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true; // Високосний рік
    } else {
        return false; // Невисокосний рік
    }
}

// Функція для визначення кількості днів у місяці
int monthLength(int year, int month) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && isLeap(year)) {
        return 29; // Високосний рік
    } else {
        return daysInMonth[month - 1]; // Невисокосний рік
    }
}

// Функція, що повертає поточну дату
Date today() {
    time_t t = time(NULL); // Отримуємо поточний час у секундах
    tm *localTime = localtime(&t); // Конвертуємо час у локальний час

    Date currentDate;
    currentDate.year = localTime->tm_year + 1900; // Плюсуємо 1900, оскільки tm_year повертає рік, який пройшов від 1900
    currentDate.month = localTime->tm_mon + 1; // Плюсуємо 1, оскільки tm_mon починається з 0
    currentDate.day = localTime->tm_mday;

    return currentDate;
}

// Функція для підрахунку кількості днів між двома датами
int daysBetweenDates(Date birthDate, Date currentDate) {
    int days = 0;

    // Додаємо дні, що залишилися в році народження
    for (int month = birthDate.month + 1; month <= 12; month++) {
        days += monthLength(birthDate.year, month);
    }
    days += monthLength(birthDate.year, birthDate.month) - birthDate.day;

    // Додаємо повні роки між днями народження та поточною датою
    for (int year = birthDate.year + 1; year < currentDate.year; year++) {
        days += (isLeap(year)) ? 366 : 365;
    }

    // Додаємо дні поточного року до поточної дати
    for (int month = 1; month < currentDate.month; month++) {
        days += monthLength(currentDate.year, month);
    }
    days += currentDate.day;

    return days;
}

int main() {
    Date birthDate = {2004, 11, 13}; // Замініть на свою дату народження
    Date currentDate = today();

    int days = daysBetweenDates(birthDate, currentDate);

    cout << "Кількість днів з дня народження до поточної дати: " << days << endl;

    return 0;
}
