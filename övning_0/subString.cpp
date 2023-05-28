#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {

	string x = "JXM925, BMW, 2005, SE";

	string rNumber = x.substr(0, 6);
	//int p_os = x.find(",");
	//string rNumber = x.substr(0, p_os);

	cout << rNumber << " ";

	int pos = x.find(",");
	string model_2 = x.substr(pos+2,3);

	cout << model_2 << " ";

	int pos_2 = x.find(",", pos+2);
	int year = stoi(x.substr(pos_2+2, 4));

	cout << year << " ";

	int pos_3 = x.find(",", pos_2+2);
	string country = x.substr(pos_3+2, 2);

	cout << country;

	
	return 0;

}