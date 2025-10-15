// Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const float G = 9.8;
const float PI = 3.14;

int main()
{
	//float* pntf = &G; ошибка
	const float* pntG = &G;
	//int* pointer;
	//int a = 25;
	//pointer = &a;
	//cout << pointer << endl;
	////cout << *pointer << endl;
	////*pointer = 10;
	////cout << a << endl;
	//pointer++;
	//cout << pointer << endl;
	//cout << *pointer << endl;
	//pointer--;
	//cout << pointer << endl;
	//cout << *pointer << endl;

	//int mult = *pointer * 2;
	//cout << mult << endl;

	//int array[] = { 1,2,3,4,5 };
	//cout << array << endl;
	//cout << *array << endl;
	//for (int i = 0; i < 5; i++) {
	//	cout << *(array + i) << ", ";
	//}
	//cout << endl;
	//cout << &(array[4]) << endl;
	//for (int* pntr = array; pntr <= &(array[4]); pntr++) {
	//	cout << *pntr << ", ";
	//}cout << endl;

	//int mArray[3][2] = { {6,5}, {4,3}, {2,1} };
	//int row = sizeof(mArray) / sizeof(mArray[0]);
	//int col = sizeof(mArray[0]) / sizeof(mArray[0][0]);
	//int* end = mArray[0] + row * col;
	//for (int* p = mArray[0], i = 0; p < end; p++, i++) {
	//	cout << *p << ", ";
	//	if (i % 2 != 0) cout << endl;
	//}cout << endl;

	//char chars[] = "Hello";
	//cout << chars[4] << endl;
	//char* pchar = chars;
	//cout << pchar << endl;
	//cout << (void*)pchar << endl;
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
