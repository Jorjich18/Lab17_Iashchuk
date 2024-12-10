#include <iostream>
#include <cmath>
using namespace std;

void change(double a[], int n, double& min)
{
	int i;
	min = a[0];
	for (i = 0; i < n; i++)
		if (a[i] < min) min = a[i];
	for (i = 0; i < n; i++)
		if (a[i] == 0) a[i] = min;
}

int main()
{
	double a[9], min;
	cout << "Input 9 float numbers:\n";
	for (int i = 0; i < 9; i++) cin >> a[i];
	change(a, 15, min);
	cout << "Changed array:\n";
	for (int i = 0; i < 9; i++) cout << a[i] << "\t";
	cout << endl;
	return 0;
}
