#include <iostream>
#include <string>

#include "./DayOfYear.h"
#include "./DateOutputter.h"

int main() {
    int day;
    int month;
  
    std::cout << "Digite o dia" << std::endl;
    std::cin >> day;

    std::cout << "Digite o mês" << std::endl;
    std::cin >> month;

    DayOfYear date(day, month);
    DateOutputter dateOutputter;

    dateOutputter.PrintAsString(date);

    return 0;
};