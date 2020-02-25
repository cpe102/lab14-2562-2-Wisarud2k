#include <iostream>
using namespace std;


int main(){
	int a=5;
	char b='A';
	char &c=b;
	int *x=&a;
	char *y=&b;
	int **z=&x;
	cout << a <<" " << b<<" "  <<c<<" "  << x<<" "  << y<<" "  << z<<" "  <<"\n";
	cout << "-----------------------------------------\n";
	cout << &a <<"\n" << (void *)&b <<"\n"<< (void *)&c << "\n"<< &x <<"\n" << &y <<"\n"<< &z <<"\n"; 
	cout << "-----------------------------------------\n";
	c='F';
	cout << a <<" " << b<<" "  <<c<<" "  << x<<" "  << (void *)y<<" "  << z<<" "  <<"\n";
	*y='W';
	cout << a <<" " << b<<" "  <<c<<" "  << x<<" "  << (void *)y<<" "  << z<<" "  <<"\n";
	*x=6;
	cout << a <<" " << b<<" "  <<c<<" "  << x<<" "  << (void *)y<<" "  << z<<" "  <<"\n";
	**z=7;
	cout << a <<" " << b<<" "  <<c<<" "  << x<<" "  << (void *)y<<" "  << z<<" "  <<"\n";
	
	return 0;
}
