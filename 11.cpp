#include <iostream>
#include <cmath>

using namespace std;

int main(){

	char c;

	cin >> c;

	int x = int(c);

	if(x < 58 && x > 47){
		cout << "ok";
	}
	else{
		cout << "no";
	}

	cout << endl;

	return 0;
}



