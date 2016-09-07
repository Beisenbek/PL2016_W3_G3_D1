/*
#20
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double x,y;

	cin >> x >> y;
	
	double a1 = 1 + sin(x+y) * sin(x+y);

	double a21 = 2*x/(1 + pow(x*y,2));
	double a2 = 2 + abs(x-a21);

	double a = a1/a2 + x;

	cout << a << endl;

	printf("%.6f",a);

	cout << endl;

	return 0;
}