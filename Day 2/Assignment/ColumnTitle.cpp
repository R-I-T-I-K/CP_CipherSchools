#include <iostream>
using namespace std;

void printString(int n)
{
	int arr[1000];
	int i = 0;

	while (n) 
  {
		arr[i] = n % 26;
		n = n / 26;
		i++;
	}

	for (int j = 0; j < i - 1; j++) 
  {
		if (arr[j] <= 0) 
    {
			arr[j] += 26;
			arr[j + 1] = arr[j + 1] - 1;
		}
	}

	for (int j = i; j >= 0; j--) 
  {
		if (arr[j] > 0)
			cout << char('A' + arr[j] - 1);
	}

	cout << endl;
}

int main()
{
	printString(1234);
	return 0;
}
