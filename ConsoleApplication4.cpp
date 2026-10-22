
#include <iostream>
#include <clocale>     
#include <windows.h>  
#include <format>
#include <string>
int main()
{
    std::setlocale(LC_ALL, "Russian");

    SetConsoleCP(1251);

    int year = 0, m, d, y;
    std::string let = "enter your age";
    std::cout << "" << std::endl;
    std::cin >> y;

    year = y / 360;

    m = (y - year*360)/30;

    d = (y - year*360 - m*30);



    if ((year > 120) || (year < 0)) { std::cout << "невалидный возраст";  return 0; }

    if ((year % 100 > 10) || (year % 100 < 20)) {
        let = "лет";
       
    }
    if (year % 10 == 1) {
        let = "год";
    
    }
    if (year % 10 < 5) {
        let = "года";
    }
    else {
        let = "лет";
    }

    std::cout << "ћне " << year << " "<< let <<" "<< m <<" мес€цев и "<< d <<" дней";

    return 0;
}
