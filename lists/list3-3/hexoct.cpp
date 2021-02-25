#include <iostream>

int main()
{
	using namespace std;

	int var_dec(42);
	int var_hex(0x42);
	int var_oct(042);

	cout << "var_dec:" << var_dec << "\n";
	cout << "var_hex:" << var_hex << "\n";
	cout << "var_oct:" << var_oct << "\n";

	return 0;

}
