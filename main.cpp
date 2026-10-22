//To display output

#include <iostream>
using namespace std;

int main() {
	cout << "hi" << endl;

	return 0;}

//Declaring different data types

int age = 1;
double d = 1.11;
float a = 1.1;
bool f = false;
char c = 'x';
string s = "hii";

cout << "Age is  " << age << endl;
cout << "Double is " << d << endl;
cout << "Float is  " << a << endl;
cout << "Boolean is " << f << endl;
cout << "Character is " << c << endl;
cout << "String is  " << s ;

//false = 0 by default, and true a =  1

string name;
int sem;

cout << "Enter your name ";
cin >>name;

cout << "Enter your semester ";
cin >> sem;

cout << "Name is " << name << endl;
cout << "Semester is " << semester << endl;

//arithmetic calculations

int a = 10, b = 2;

cout << "Sum = " << a + b << endl;
cout << "Difference = " << a - b << endl;
cout << "Product = " << a * b << endl;
cout << "Division =  " << a / b << endl;


//integer and decimal division

	cout << 7 / 2 << endl;
	cout << 7.0 / 2 << endl;
	cout << 7 / 2.0 << endl;

	int a = 7, b = 2;
	cout << a / b << endl;


// checking whether a number is positive , negative nor zero

		int num;

		cout << "Enter a number  ";
		cin >> num;

		if (num > 0) {	cout << "Positive";	} 
		else if (num < 0) {	cout << "Negative";	} 
		else {	cout << "Zero";	}

//compare two numbers

			int a, b;

			cout << "Enter 2 numbers  ";
			cin >> a >> b;

			if (a < b) { 	cout << "a is less than b";	}
			 else if (a > b) {	cout << "a is greater than b";	}
			 else {	cout << "Both are equal";}


// check whether a number is within a range using && operator

			int n;

			cout << "Enter a number:";
			cin >> n;

			if (n >= 10 && n <= 20) {	cout << "In range";	} 
			else {	cout << "Out of range";			}

		
// use || to check whether a number is outside a range
	

			int n;

			cout << "Enter a number ";
			cin >> n;

			if (n < 10 || n > 20) {	cout << "it is outside of range";	} 
			else {	cout << "it is inside  the range";	}


// nested if statement

			int age, id;

			cout << "Enter age ";
			cin >> age;

			if (age >= 18) {
				cout << "Do you have a valid ID? (press 1 = Yes, 0 = No)? ";
				cin >> id;

				if (id == 1) {cout << "Entry  is allowed";	} 
				else if (id == 0) {	cout << "ID  is required";	} 
				else {		cout << "Invalid ID input";
				
				  }    }
    else {
        cout << "Underage";}

   
