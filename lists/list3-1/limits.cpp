#include <iostream>
#include <climits>

int main()
{
	using namespace std;

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;

	cout << "Int is " << sizeof(n_int) << " Bytes." << endl;
	cout << "Short is " << sizeof n_short << " Bytes." << endl;
	cout << "Long is " << sizeof n_long << " Bytes." << endl;

	cout << "Maxinum values:" << endl;
	cout << "Int£º" << n_int << endl;
	cout << "Short£º" << n_short << endl;
	cout << "Long£º" << n_long << endl;

	cout << "Mininum int value£º" << INT_MIN << endl;
	cout << "Bits per byte£º" << CHAR_BIT << endl;

	return 0;
}
