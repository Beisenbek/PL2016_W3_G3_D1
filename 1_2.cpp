/*
#18
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double x,y;

	cin >> x >> y;

	double a1 = x + y/(x*x+4);

	double a21 = exp(-x-2);
	double a22 = 1/(x*x + 4);
	double a2 = a21 + a22;

	double a = (1+y)*a1/a2;

	printf("answer is: %.1f\n",a);

	return 0;
}