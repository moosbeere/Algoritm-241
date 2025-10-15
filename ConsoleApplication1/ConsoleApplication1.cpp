// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>//подключение библиотеки для работы с вводом-выводом в консоль
//#include <string>

int main()//точка входа в приложение
{
    const float f_const = 2.3;
    const std::string s_const = "Windows";

    setlocale(LC_ALL, "ru");//устанавливаем работу с кириллицей
    std::cout << "Спецсимволы \"\\\"!\n";//вывод спецсимволов
    std::cout << "First string!\n";//вывод в консоль с переносом строки (\n)
    std::cout << "Первая строка!\n" << "Вторая строка!\n";

    int x = 150;
    float f = 15.933;
    char c = 250;
    std::cout << "x = " << x << std::endl;
    std::cout << "f = " << f << std::endl;
    std::cout << "c = " << c << std::endl;

    short date = 6;
    std::string month = "September";
    int year = 2000;
    std::cout << "Мoя дата рождения: " << date << " " << month << " " << year << " года\n";
    std::cout << f_const << " " << s_const << std::endl;

}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
