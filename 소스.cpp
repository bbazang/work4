#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	float x1 = 0;
	float x2 = 0;

	cin >> a;
	cin >> b;
	cin >> c;

	x1 = (- b + sqrt(b * b - 4 * a * c)) / (2 * a);
	x2 = (- b - sqrt(b * b - 4 * a * c)) / (2 * a);
	cout << x1 << endl;
	cout << x2 << endl;
	
	return 0;
}