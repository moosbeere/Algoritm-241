// Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const float G = 9.8;
const float PI = 3.14;
const int cols = 2;


void separator() {
	std::cout << "-----------------------------\n";
}

void printArray(int array[], int length) {
	cout << *array << endl;
	separator();
	/*int leng = sizeof(array) / sizeof(array[0]);
	cout << leng << endl;*/ //вывод равен 2, что не соответствует количесству элементов в массиве
	for (int i = 0; i < length; i++) {
		cout << array[i] << ", ";
	}cout << endl;
	//for (auto elem : array) { ошибка использования цикла foreach для массива, переданного в функцию
	//}
}

void printArray(int* begin, int* end) {
	for (int* p = begin; p < end; p++) {
		cout << *p << ", ";
	}cout << endl;
}

void printArray2(const int(*array)[cols], int rows) {
	//array[0][1] = 67; ошибка изменения значения у константного указателя
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << ", ";
		}cout << endl;
	}
}

void function1() {
	cout << "Function 1" << endl;
}

void function2() {
	cout << "Function 2" << endl;
}

float add(float a, float b) {
	return a + b;
}

float sub(float a, float b) {
	return a - b;
}

int getMax(int array[], int length, bool (*compare)(int, int)) {
	int max = array[0];
	for (int i = 1; i < length; i++) {
		if (compare(array[i], max)) max = array[i];
	}
	return max;
}

bool compare1(int x, int y) {
	return (x > y);
}
bool compare2(int x, int y) {
	return (x < y);
}

void numberPositive() {
	cout << "+\n";
}
void numberNegative() {
	cout << "-\n";
}

void (*function(int x))() {
	return (x > 0) ? numberPositive : numberNegative;
}

int* test(){
	return new int(5);//опасно создавать динамический объект в локальной области видимости
}

int main()
{
	//Динамические объекты
	int* pc1 = new int(6);
	cout << pc1 << " = " << *pc1 << endl;
	delete pc1;

	int* pc2 = test();
	delete pc2;
	//delete pc2; повтороное удаление указателя не имеет смысла, так как память дополнительно не выделялась

	int* array = new int[3]{ 2,5,3 };
	cout << array[1] << endl;

	for (int* i = array; i < array + 3; i++) {
		cout << *i << ", ";
	} cout << endl;
	delete[] array;


	//указатели на функции
	//void (*testf)() = function(-5);
	//testf();
	//testf = function(5);
	//testf();
	//void (*pf)();
	//pf = function1;
	//pf();
	//pf = function2;
	//pf();
	//void(*pfs[])() = {function1, function2};
	//pfs[0]();
	//pfs[1]();
	//float (*operation)(float, float);
	//operation = add;
	//cout << operation(4, 6) << endl;
	//operation = sub;
	//cout << operation(4, 6) << endl;

	//int array[] = { 3,5,2,8,5 };
	//cout << getMax(array, 5, compare1) << endl;
	//cout << getMax(array, 5, compare2);

	//функции и массивы
	/*int array[] = { 1,4,76,3,98,2 };
	int length = sizeof(array) / sizeof(array[0]);
	printArray(array, length);
	printArray(begin(array), end(array));
	int array2[3][cols] = { {4,6},{8,9},{34,8} };
	printArray2(array2, 3);*/

}


	//Указатели и константы
	////float* pntf = &G; ошибка
	//const float* pntG = &G;
	//cout << pntG << " = " << *pntG << endl;
	////*pntG = 7.7; Ошибка смены значения, на которое указывает константный указатель
	//pntG = &PI;
	//cout << pntG << " = " << *pntG << endl;
	// 
	//int x = 10;
	//int y = 15;
	//const int* pntX = &x;
	//cout << pntX << " = " << *pntX << endl;
	////*pntX = 30;// ошибка присвоения нового значения константному указателю
	//pntX = &y;
	//cout << pntX << " = " << *pntX << endl;

	//int z = 29;
	//int* const pntZ = &z;
	//cout << pntZ << " = " << *pntZ << endl;
	////pntZ = &x; ошибка изменения адреса указателя
	//*pntZ = 69;
	//cout << pntZ << " = " << *pntZ << endl;

	//int m = 65;
	//const int* const pntM = &m;
	//cout << pntM << " = " << *pntM << endl;
	//pntM = &x; ошибка изменения адреса
	//*pntM = 76; ошибка изменения значения









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


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
