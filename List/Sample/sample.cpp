#include "Polinom.h"
#include "monom.h"
void main()
{
	Polinom A, B;

	setlocale(LC_ALL, "Russian");
 	cout << "���� A & B" << endl;

	A.Enter();
	B.Enter();
	cout << "��������: +, -, * " << endl;



	cout << A << endl;

	char op;
	cin >> op;
	CheckOperation(op);

	Polinom C;
	C = A.TypeChar(B, op);
	
	cout << "����� = " << C << endl;
	C.Clear();
}