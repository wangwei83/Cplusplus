#include <iostream>
using namespace std;	
int main()
{
	char a, b;
	a = 'y';
	while (a)
	{
		cout << "�������������֮��ѡ��һ������Ĭ�ǡ�";
		cout << "����������ë��";
		cin >> a;
		if (a == 'y')
			cout << "��ѡ������";
		else
			if (a == 'n')
			{
				cout << "������������";
				cin >> b;
				if (b == 'y')
					cout << "��ѡ�����㡣";
				else
					if (b == 'n')
						cout << "��ѡ�����ޡ�";
					else
						cout << "������y��n��";
			}
	}
}