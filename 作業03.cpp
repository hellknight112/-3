#include <iostream>
using namespace std;
int main(){
	float height;
	float weight;
	float bmi;
	cout << "請輸入你的身高: ";
	cin >> height;
	cout << "請輸入你的體重: ";
	cin >> weight;
	
	bmi = (weight / ((height/100.0) * (height/100.0)));
	cout << "your BMI is: ";
	cout << bmi << endl;

}
