#include<iostream>

//const pointers

using namespace std;

int main()
{
	int x=10;
	const int* ptr = &x;//a read-only pointer which refers to x, now ptr value cannot be changed
	
	//*ptr=20; COMPILE TIME ERROR-cannot change value of the pointer as its is read-only/constant
	//x=20; COMPILE TIME ERROR
	 
	cout<<x<<endl;// output=10
	//cout<<++*ptr produces error as *ptr is read-only i.e const and its value cannot be changed
	cout<<&x<<endl; // output-memory address of x
	cout<<&ptr<<endl; // output-memory address of ptr
	cout<<++x<<endl;//first increment then print-x becomes = 11
	cout<<x++<<endl;//output-11 as first it prints then increments value of x to 12
	cout<<x;//now prints 12
	return 0 ;
}
