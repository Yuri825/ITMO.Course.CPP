//������� 5. ���������� �������� ��� �������� ������ ����� � �������� ���
//��������� �������� ����������� ������� �������� ������ �������������� ����� �� ���������� ������� ���������� � ��������.
//������������ �������� �������� : ����� ������� �������� num ������ �� 2 �� ��� ���, ���� num > 2. 
//��� ������ ������� ����� �������� ������� � ������� ��������� num % 2.

#include <iostream>

using namespace std;
string result = "";
string getTwoSystem(int num)
{

	if (num / 2 == 0)
	{
		return "1" + result;
	}
	else
	{
		if (num % 2 == 0)
		{
			result = "0" + result;
			num = num / 2;
		}
		else
		{
			result = "1" + result;
			num = num / 2;
		}
		return getTwoSystem(num);
	}
}

void main()
{
	system("chcp 1251");
	int a;
	cout << "������� �����, ������� ���������� ��������� � �������� ���" << endl;
	cin >> a;
	cout << getTwoSystem(a) << endl;
}
