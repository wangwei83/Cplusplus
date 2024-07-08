#include <iostream>
using namespace std;
int main() {
	float a, b, c;
	char d;
	while (true)
	{

		cin >> a >> d >> b;
		switch (d)
		{
		case '+':
			c = a + b;
			break;
		case '-':
			c = a - b;
			break;
		case '*':
			c = a * b;
			break;
		case '/':
			c = a / b;
			break;
		case '=':
			c=a==b;
		}
		cout << a << d << b << "=" << c << endl;
		printf("\n");
	}
}