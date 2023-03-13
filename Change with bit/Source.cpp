#include <iostream>;

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "¬ведите значение переменных a, b: "; cin >> a >> b;
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	cout << "a = " << a << "; b = " << b << endl;
}