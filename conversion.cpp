#include <iostream>
using namespace std;
int main()
{
	int min;
	int max;
	int step;
	cin >> min;

	cin >> max;

	cin >> step;
	for (int i = min; i <= max; i += step)
	{
		int C = 5*(i - 32)/9;
		cout<<min<<" " << C << endl;
		min += step;
	}
	return 0;
}

// C = (5/9)(F – 32)