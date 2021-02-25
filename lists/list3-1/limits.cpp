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
	cout << "Int��" << n_int << endl;
	cout << "Short��" << n_short << endl;
	cout << "Long��" << n_long << endl;

	cout << "Mininum int value��" << INT_MIN << endl;
	cout << "Bits per byte��" << CHAR_BIT << endl;

	return 0;
}
