#include <iostream>
using namespace std;
int main() {
	float a, b, c;
	cout << "请问你今年多少岁？";
	cin >> a;
	cout << "请问你的妈妈今年多少岁？";
	cin >> b;
	c = b - a;
	cout << "你妈妈生你的时候" << c << "岁。" << endl;
	return 0;
}