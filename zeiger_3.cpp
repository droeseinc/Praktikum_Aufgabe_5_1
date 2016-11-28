#include <iostream>

using namespace std;

void tausche(int* pa, int* pb) {
	int i = *pa;
	*pa = *pb;
	*pb = i;

}

void addiere(int y, int x) {
	int z = y;
	y = z + x;

}

int main() {

	 int x = 123;
	 int y = -1;
	 int z = 0;

	int *pa = &x;
	int *pb = &y;
	int *pc = &z;

	cout << "--- Ausgabe nach Teilaufgabe a) --- " << endl
	<< "\t\t"
	<< "Adresse\t " << "\tInhalt\t " << "\treferenzierter Wert \t" << endl

	<< "Variable x \t" << &x << "\t" << x << endl
	<< "Variable y \t" << &y << "\t" << y << endl
	<< "Variable z \t" << &z << "\t" << z << endl << endl

	<< "Zeiger x \t" << pa << "\t" << &x << "\t" << x << endl
	<< "Zeiger y \t" << pb << "\t" << &y << "\t" << y <<endl
	<< "Zeiger z \t" << pc << "\t" << &z << "\t" << z << endl << endl;



	tausche(pa, pb);

	cout << "--- Ausgabe nach Teilaufgabe b) --- " << endl
		<< "\t\t" << "Adresse\t " << "\tInhalt\t " << "\treferenzierter Wert \t" << endl
		<< "Variable x \t" << &x << "\t" << *pb << endl
		<< "Variable y \t" << &y << "\t" << *pa << endl
		<< "Variable z \t" << &z << "\t" << *pc << endl << endl;



	cout << "Zeiger x \t" << pa << "\t" << &x << "\t" << x << endl
		<< "Zeiger y \t" << pb << "\t" << &y << "\t" << y <<endl
		<< "Zeiger z \t" << pc << "\t" << &z << "\t" << z << endl << endl;





	cout << "--- Ausgabe nach Teilaufgabe d) --- " << endl
		<< "\t\t" << "Adresse\t " << "\tInhalt\t " << "\treferenzierter Wert \t" << endl
		<< "Variable x \t" << &y << "\t" << y << endl
		<< "Variable y \t" << &x << "\t" << x << endl
		<< "Variable z \t" << &z << "\t" << z << endl << endl;

	pa = pa + 2;

	cout << "Zeiger x \t" << pa << "\t" << *pa << "\t" << x << endl
		<< "Zeiger y \t" << pb << "\t" << *pb << "\t" << y <<endl
		<< "Zeiger z \t" << pc << "\t" << *pc << "\t" << z << endl << endl;


	cout << "--- Ausgabe vor Teilaufgabe e) --- " << endl
		<< "\t\t" << "Adresse\t " << "\tInhalt\t " << "\t referenzierter Wert \t" << endl
		<< "Variable y \t" << &x << "\t" << *pa << endl;




				addiere(y, 5);


	cout << "--- Ausgabe nach Teilaufgabe e) --- " << endl
		<< "\t\t" << "Adresse\t " << "\tInhalt\t " << "\treferenzierter Wert \t" << endl
		<< "Variable y \t" << &x << "\t" << *pa << endl;



	return 0;
}
