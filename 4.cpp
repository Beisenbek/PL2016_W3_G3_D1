/*
pow samples
*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double a,x;

	cin >> a >> x;

	cout << pow(a,x) << endl;
	cout << exp(x * log(a)) << endl;

	return 0;
}