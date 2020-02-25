#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() here 
void shuffle(int &a,int &b,int &c,int &d){
	int x[4]={a,b,c,d};
	int j,k,temp;
	for(int i=0;i<10;i++){
		j=rand()%4;
		k=rand()%4;
		temp=x[j];
		x[j]=x[k];
		x[k]=temp;		

	}
	a=x[0];
	b=x[1];
	c=x[2];
	d=x[3];
	
	
}
