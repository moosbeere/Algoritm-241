// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int func();
int main()
{
    const int PI = 3.14;
    setlocale(LC_ALL, "RU");
    int a;
    long long bigNumber;
    std::cout << "Привет \\\"мир\"!\n";
    //std::cin >> a;
    //a += a; //a = a + a;
    //a = 3;
    //a++; // a = a + 1; ++a
    /*a--; // a = a - 1;
    std::cout << a << std::endl;
    std::cout << a << "\n";
    func();*/

    float f = 3.4;
    char c = 'v';
    char h = 120;
    bool b = true;
    std::string str = "hello";

    int x = 5;
    int y = x << 1;
    int z = x >> 1;
    std::cout << x << "   101\n";
    std::cout << y << "\n";
    std::cout << z << "\n";

    bool b2 = false;
    bool b1 = true;
    std::cout << !b2 << "\n";
    cout << (b1 && b2) << endl;
    cout << (b1 || b2) << endl;
    cout << (x == y) << endl;

}

int func()
{
    return 0;
}
