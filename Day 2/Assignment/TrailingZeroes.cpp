#include <iostream>
using namespace std;

int TrailingZeros(int n)
{
	int count = 0;

	for (int i = 5; n / i >= 1; i *= 5)
		count += n / i;

	return count;
}

int main()
{
	int n = 25;
	cout << "Count of trailing 0s--- " << TrailingZeros(n);
	return 0;
}
