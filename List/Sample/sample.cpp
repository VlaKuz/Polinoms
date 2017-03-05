#include "Polinom.h"
#include "monom.h"
void main()
{
	Polinom A, B;

	setlocale(LC_ALL, "Russian");
 	cout << "ввод A & B" << endl;

	A.Enter();
	B.Enter();
	cout << "операция: +, -, * " << endl;



	cout << A << endl;

	char op;
	cin >> op;
	CheckOperation(op);

	Polinom C;
	C = A.TypeChar(B, op);
	
	cout << "ответ = " << C << endl;
	C.Clear();
}