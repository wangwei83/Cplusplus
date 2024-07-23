/*
#include <iostream>
using namespace std;

int main() {
	int a[10], i, j, b, c;
	b = 0;
	cout << "请输入10个数：" << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 10; j++)
		{
			if (a[i] == a[j])
			{
				cout << "有相同的数" << endl;
			}
			else if (a[i] > a[j]) {
				b = b;
			}
			else // a[i]<a[j]
			{
				b = a[i];
				a[i] = a[j];
				a[j] = b;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		cout << a[i] << " ";
	}
}

*/

#include <iostream>
using namespace std;
int main(){
	int a[5], i, j, b, k;
	cout << "请输入5个数：" << endl;
	for ( i = 0; i < 5; i++)
	{
		cin >>  a[i];
	}

	for( i = 0; i < 4; i++)
	{
		for ( j = i + 1; j < 5; j++)
		{
			if (a[i] > a[j])
			{
				b = a[i];
				a[i] = a[j];
				a[j] = b;
			}

			
		}
		cout << endl;
		for (k = 0; k < 5; k++)
		{
			cout << a[k] << " ";
		}
	}
	/*
	for(i= 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	*/
}


