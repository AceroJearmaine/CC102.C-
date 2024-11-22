#include <iostream>

using namespace std;

int main ()
{
	int temperature;
	cout << "TEMPERATURE: ";
	cin >> temperature;
	
	if (temperature < 32){
		cout << "Bring a Heavy Jacket";
	}
	else if ( temperature < 32 && temperature > 50  ){
		cout << "Bring light jacket";
	}
	else if ( temperature >=  50 ){
		cout << "Don't bring any jacket";
	} 
	else {
		cout << "not valid";
	}
	return 0;
}