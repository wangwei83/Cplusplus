#include <iostream>
using namespace std;	
int main()
{
	char a, b;
	a = 'y';
	while (a)
	{
		cout << "请你在鱼鸟和兽之间选择一样，并默记。";
		cout << "请问它有羽毛吗？";
		cin >> a;
		if (a == 'y')
			cout << "你选的是鸟。";
		else
			if (a == 'n')
			{
				cout << "请问它有鳃吗？";
				cin >> b;
				if (b == 'y')
					cout << "你选的是鱼。";
				else
					if (b == 'n')
						cout << "你选的是兽。";
					else
						cout << "请输入y或n。";
			}
	}
}