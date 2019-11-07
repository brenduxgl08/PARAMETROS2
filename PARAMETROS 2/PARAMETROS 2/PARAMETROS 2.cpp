#include <string>
#include <iostream>
using namespace std;
//Prototipo de funcion
void intercambio(int*, int*); //los asteriscos son punteros

int main()
{
	int a, b;
	cout << "Introduce el primer valor:";
	cin >> a;
	cout << "Introduce el segundo valor:";
	cin >> b;
	cout << endl;
	cout << "Valor de a: " << a << " Valor de b: " << b << endl;
	intercambio(&a, &b);
	cout << endl << "Despues del intercambio: " << endl << endl;
	cout << "Valor de la a: " << a << " Valor de la b: " << b << endl;
	system("pause");
	return 0;
}
void intercambio(int* x, int* y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}