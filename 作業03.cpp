#include <iostream>
using namespace std;
int main(){
	float height;
	float weight;
	float bmi;
	cout << "�п�J�A������: ";
	cin >> height;
	cout << "�п�J�A���魫: ";
	cin >> weight;
	
	bmi = (weight / ((height/100.0) * (height/100.0)));
	cout << "your BMI is: ";
	cout << bmi << endl;

}
