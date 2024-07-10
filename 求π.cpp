#include <iostream>
#include <math.h>
using namespace std;
int main() {
	float a;
	long int i;
	a = 0;
	for(i = 1; i <= 100; i+=2) 
	{
		if(i%4==3)
						a-=1.0/i*(1.0/pow(2,i)+1.0/pow(3,i));
		else
			            a+=1.0/i*(1.0/pow(2,i)+1.0/pow(3,i));
		}
	cout << a * 4;
	return 0;
	}