#include <iostream>
using namespace std;
int main() {
	int a, b,c;
	int array[7][7];
	//b = 1;
	//a = 4;
	//cout << "请输入一个三角形阵列的行数：";
	//cin >> a;

	for(a=1;a<=7;a++){
		if(a<=4){
			for (b = 1; b <= 2 * a - 1; b++) {
				if (b <= a)
					cout << b << " ";
				else
					cout << 2 * a  - b << " ";
			}
		}
		else{
			for(b=1;b<=15-2*a;b++){
				if (b <= 8-a)
					cout << b << " ";
				else
					cout << 16- 2 * a -b << " ";
			}
		}
		cout << endl;
	}
}