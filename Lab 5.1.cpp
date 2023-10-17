// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double f(const double a, const double b, const double c); // прототип
int main()
{
	double s, t;
		cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = (f(1, t*t, s) + f(t, s*s, 1))/(1 + std::pow(f(1, t * s, 1), 2));
	cout << "c = " << c << endl;
	return 0;
}
double f(const double a, const double b, const double c) // визначення
{
	return (std::pow(std::sin(a * b * c), 2)) / (a * a + b * b + c * c);
}