#include <iostream>
#include <cmath>

using namespace std;

int main(){

	char a,b;

	cin >> a >> b;

	int x = (int)a-(int)'0';
	int y = (int)b-(int)'0';

	cout << x + y;

	cout << endl;

	return 0;
}