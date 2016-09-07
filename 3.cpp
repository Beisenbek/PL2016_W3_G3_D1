/*
pow samples
*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double a;

	cin >> a;

	cout << sqrt(a) << endl;
	cout << pow(a,0.5) << endl;
	cout << exp(0.5 * log(a)) << endl;

	return 0;
}