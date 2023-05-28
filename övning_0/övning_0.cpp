#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

/*
int main() {


	string sträng = "";
	cout << "skriv en sträng: ";
	cin >> sträng;

	int heltal;
	cout << "skriv ett heltal: ";
	cin >> heltal;
	
	float flyttal;
	cout << "skriv ett flyttal: ";
	cin >> flyttal;

	cout << "Strängen ska bli omvandlad till ett heltal: " << stoi(sträng) << endl;

	float f = heltal;
	cout << "Heltalet ska bli ett flyttal: " << f << endl;

	cout <<"Flyttalet ska bli en sträng: " << to_string(flyttal) << endl;

}
*/
/*
int main() {

	int olika_tal;
	int summa = 0;

	while (true) {

		cout << "Ange ett tal: ";
		cin >> olika_tal;

		summa += olika_tal;

		if (olika_tal == 0)
			break;

	}

	cout << summa;

}
*/
/*
int main() {

	for (int i = 0; i <= 100; i++) {

		if (i % 7 == 0)
			cout << i << endl;

	}
	return 0;
}
*/
/*
int func(int max, int divisor) {
	int summma = 0;
	for (int i = 0; i <= max; i++) {

		if (i % divisor == 0)
			cout << i << endl;

	}
	return 0;

}
int main() {
	int max;
	int divisor;
	while(true){
	cout << "ange max värde: ";
	cin >> max;

	cout << "ange divisor värde: ";
	cin >> divisor;

	func(max, divisor);

	if (max == 0)
		break;

	}
}
*/
/*
string func(int max, int divisor) {
	string s = "";
	for (int i = 0; i <= max; i++) {

		if (i % divisor == 0)
			s += to_string(i) + " ";

	}
	return s;

}
int main() {
	int max;
	int divisor;
		while(true){
		cout << "ange max värde: ";
		cin >> max;

		cout << "ange divisor värde: ";
		cin >> divisor;
		
		cout << func(max, divisor) << endl;
		}

}
*/
/*
int main() {
	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
		cout <<i<< ": "<< ((float)rand()) / (float)RAND_MAX * 10 << endl;

	}

}
*/
/*
int main() {
	float arr[100];
	float max = 0;
	float min = 999999;
	float summa = 0;

	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
		float rand_tal = ((float)rand()) / (float)RAND_MAX * 10;
		arr[i] = rand_tal;
		cout << arr[i] << endl;
	}
	for (int k = 0; k < size(arr); k++) {

		if (arr[k] < min)
			min = arr[k];
		else if (arr[k] > max)
			max = arr[k];
		summa += arr[k];


	}
	float medelvärde = summa / size(arr);
	cout << "max: " << max << endl << "min: " << min << endl << "summa: " << medelvärde;
}
*/