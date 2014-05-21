//////////////////////////////
//Shane Nishioka-Healy
//Homework 1
//CS-172
/////////////////////////////

#include <iostream>
#include <ctime>
#include <cmath>
#include <string>
using namespace std;

void ex02();
void ex03();
void ex04();
void ex05();
int dub(int t);
int add(int u, int o);
int pl(int &a);
void ar(const int h, int hl[]);
void ak(int h, int hl[]);

int main(){

	ex02();
	ex03();
	ex04();
	ex05();

}

void ex02(){
	srand(time(NULL));
	bool hasPassedTest = 1;
	int x = rand();
	int y = rand();

	if (x >= y){
		cout << "X is greater than or equal to Y" << endl;
	}
	else{
		cout << "X is NOT greater than Y" << endl;
	}

	int numberOfShares;
	cout << "How many shares? ";
	cin >> numberOfShares;
	if (numberOfShares < 100){
		cout << "number of shares is less than 100" << endl;
	}
	else {
		cout << "number of shares is greater than 100"<< endl;
	}

	int boxw, bookw;
	cout << "Box width: ";
	cin >> boxw;
	cout << "book width: ";
	cin >> bookw;
	

	if (boxw % bookw == 0){
		cout << "box width is evenly divisible by box length" << endl;
	}
	else {
		cout << "box width is not evenly divisible by box length"<< endl;
	}

	int SL;
	int TEMP;
	cout << "What is the shelf life for the box of chocolates? ";
	cin >> SL;
	cout << "What is the temperature? ";
	cin >> TEMP;

	if (TEMP > 90){
		SL = SL - 4;
	}

}


void ex03(){
	double sqarea;
	cout << "what is the area of the square? ";
	cin >> sqarea;
	double result = sqrt(sqarea);
	double result2 = (result* result) + (result*result);
	double result3 = sqrt(result2);
	cout << "Diagonal: " << result3 << endl;

	char ans;
	cout << "Yes(y) or No(n) ? ";
	cin >> ans;
	if (ans == 'y'){
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	char tab = '\t';

	string mailingAddress;
	cout << "What is your mailing address? ";
	cin >> mailingAddress;

	string var = "";
}


void ex04(){
	int num;
	cout << "Enter a number between 1 and 10: ";
	cin >> num;
	while (num < 1 || num > 10){
		cout << "enter a valid input between 1 and 10" << endl;
		cin >> num;
	}
	int sum = 0;
	for (int i = 1; i < num +1; i++){
		sum = i*i*i + sum;

	}
	
	int p = 1;
	do{
		
		cout << "*";
		p++;
	} while ( p < num +1);

	cout << endl;

	for (int e = 0; e <= 40; e++){
		if (e % 2 == 0)
			cout << e << " ";
	
	}

	dub(num);
	add(rand(), rand());
	

}

//doubles parameter
int dub(int t){
	int dubl = t * 2;
	return dubl;
}

//returns sum of two parameters
int add(int u, int o){
	int g = u + o;
	return g;
}

// adds one to its parameter
int pl(int &a){
	a++;
	return a;
}

void ex05(){
	const int a = 5;
	int arr[a];
	int n = 0;
	while (n < 5){
		cout << "enter an integer: ";
		cin >> arr[n];
		n++;
	}
	int b = 0;
	for (int h = 0; h < a; h++)
		b = arr[h] + b;
	cout << b << endl;

	ar(a, arr);

	ak(a, arr);
}

void ar(int h, int hl[]){
	for (int l = 0; l < h; l++){
		cout << hl[l] << " ";
	}
}

void ak(int h, int hl []){
	int b;
	cout << "enter value: ";
	cin >> b;
	int j = 0;
	for (int l = 0; l < h; l++){
		if (hl[l] == b){
			cout << "Value is contained in array " << l << endl;
			j++;
		}
	}
		if (j == 0){
			cout << "value is not contained in the array" << endl;
		}
	
	
	}
