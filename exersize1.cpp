//
#include <iostream>
#include <cmath>
using namespace std;

//
double module(int a[], int n)
{
	double s1 = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 0) s1 += a[i];
	return abs(s1);
}

double sum(int a[], int n)
{
	double s2 = 0;
	for (int i = 0; i < n; i++)
		if (a[i] >= 0) s2 += a[i];
	return s2;
}

int main()
{
	int a[15];
	cout << "Input 15 integer numbers:\n";
	for (int i = 0; i < 15; i++) cin >> a[i];
	cout << "Module of sum of negative numbers: " << module(a, 15) << endl;
	cout << "Sum of positive numbers: " << sum(a, 15) << endl;
	return 0;
}