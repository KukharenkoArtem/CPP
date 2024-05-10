#include <iostream>
#include <string>
#include <map> // забезпечує швидкий доступ до елементів за ключем та автоматичне сортування елементів за ключем
using namespace std;
int main() {
    string valuesStr, templateStr; // зберігання введених даних та шаблону
    getline(cin, valuesStr); // Зчитуємо рядок з консолі та зберігаємо його в valuesStr
    getline(cin, templateStr);

    map<string, string> valuesMap; // Використовується для зберігання пар ключ-значення
    size_t pos = 0; // Змінна для зберігання поточної позиції у рядку valuesStr
    while (pos < valuesStr.length()) { // Цикл використовується для розбиття рядка valuesStr на пари ключ-значення та їх зберігання в valuesMap.
        size_t equalPos = valuesStr.find('=', pos); // Знаходимо позицію першого знаку '=' в рядку
        if (equalPos == string::npos) 
            break;
        
        string name = valuesStr.substr(pos, equalPos - pos); // Отримуємо ім'я змінної // відображає довжину підрядка
        size_t commaPos = valuesStr.find(',', equalPos); // Знаходимо позицію коми
        string value = valuesStr.substr(equalPos + 1, commaPos - equalPos - 1); // отримує значення змінної з рядка valuesStr і зберігає його у змінній value
        
        valuesMap[name] = value; // дозволяє зберігати та отримувати значення за їх ключами
        
        if (commaPos == string::npos) // Якщо кому не знайдено, виходимо з циклу
            break;
        pos = commaPos + 1;  // Переміщаємо позицію до наступного символу після коми
    }


    for (const auto& pair : valuesMap) { // Цикл використовується для проходженням по всім парам ключ-значення
        string placeholder = "[" + pair.first + "]"; 
        size_t pos = templateStr.find(placeholder);
        while (pos != string::npos) { // string::npos це константа, яка означає позиція не знайдена
            templateStr.replace(pos, placeholder.length(), pair.second); // Замінюємо плейсхолдер на відповідне значення
            pos = templateStr.find(placeholder, pos + pair.second.length()); // Знаходимо наступне входження плейсхолдера
        }
    }

    cout << templateStr << endl;

    return 0;
}
