#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "How old are you: ";
	cin >> age;

	if ( age > 0 && age < 16) {
		cout << "Too young to drive";
	}
	else if ( age == 16){
		cout << "Better clear the roads";
	}
	else if ( age > 16) {
		cout << "You are getting prety old";
	}
	else {}
	return 0;
}	