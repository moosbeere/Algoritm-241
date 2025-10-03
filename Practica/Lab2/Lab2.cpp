// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void func(int& x, int& y);
void print(string name);
void print(float f);
int sum(int x, int y, int z);

int main()
{

    int x = 10;
    int& y = x;
    y = 15;
    cout << x << endl;
    int a = 10;
    int b = 4;
    func(a, b);
    cout << a << " " << b << endl;
    print("name");
    int s = sum(3, 4, 5);
    cout << s << endl;

    /*int array[] = { 1,2,3,4,5 };
    int length = sizeof(array) / sizeof(array[0]);*/
    
    /*for (auto i : array) {
        cout << i << ", ";
    }
    
    for (int i = 0; i < length; i++) {
        cout << array[i] << ", ";
    }*/

    /*int m_arr[3][2] = {
        {1,2},
        {3,4},
        {5,6}
    };
    for (auto &massiv : m_arr) {
        for (int elem : massiv) {
            cout << elem << ", ";
        }
        cout << endl;
    }

    cout << m_arr[2][0];*/

    //for (int i = 0; i <= 10; i++) {// i = i + 1 i+=i
    //    cout << i << ", ";
    //}
    //cout << endl;
    //int i = 0;
    //while (i <= 10) {
    //    cout << i << ", ";
    //    i++;
    //}
    //cout << endl;
    //do {
    //    cout << i << ", ";
    //    i++;
    //} while (i <= 10);
    //
    //cout << endl;
    //int r = 0;
    //while (r < 7) {
    //    r++;
    //    if (r == 3) continue;
    //    if (r == 6) break;
    //    cout << r << endl;
    //}

    //int a;
    //cout << "Enter number: ";
    //cin >> a;
    //a = a * 2;
    //if (a > 10) {
    //    a = a * 2;
    //}
    //else if(a < 0)
    //{
    //    a = a * 4;
    //}
    //else {
    //    a = a + 3;
    //}

    //a = (a > 10) ? (a * 2) : (a * 4);
    //cout << a << endl;

    /*switch (a) {
    case 1: {
        cout << "you enter 1" << endl;
        break;
    }
    case 2: {
        cout << "you enter 2" << endl;
        break;
    }
    case 3: {
        cout << "you enter 3" << endl;
        break;
    }
    default: {
        cout << "ok" << endl;
        break;
    }
    }*/


    //string name;
    //cout << "Enter your name: ";
    //cin >> name;
    //cout << "Hello, " << name << "!\n";


}

void func(int& x, int& y) {
    x += 1;
    y = y * 7;
}

void print(string name)
{
    cout << name << endl;
}

void print(float f)
{
    print("number");
}

int sum(int x, int y, int z)
{
    int sum = x + y + z;
    return sum;
}
