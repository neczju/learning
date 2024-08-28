#include <iostream>

using namespace std;

int main()
{
	int mm;
	cout << "Godzina prawdy. W tym komputerze poszczegolne typy\n"
		<< "maja nastepujace rozmiary w bajtach\n";
	cout << "typ char: \t" << sizeof(char) << endl;
	cout << "typ int: \t" << sizeof(int) << endl;
	cout << "typ short: \t" << sizeof(short) << endl;
	cout << "typ long: \t" << sizeof(long) << endl;
	cout << "typ float: \t" << sizeof(float) << endl;
	cout << "typ double: \t" << sizeof(double) << endl;
	cout << "typ long double: \t" << sizeof(long double) << endl;

	cout << "Nasz obiekt lokalny mm ma rozmiar: " << sizeof(mm) << endl;
	if(sizeof(int) == 4)
	{
		cout << "Ten kompilator zapisuje wartosci typu int jako 4-bajtowe (4 * 8 = 32-bitowe)" << endl;
	}
	else{
		cout << "Uwaga: W tym kompilatorze typ int o rozmiarach innych niz 4 bajty" << endl;
	}
}

