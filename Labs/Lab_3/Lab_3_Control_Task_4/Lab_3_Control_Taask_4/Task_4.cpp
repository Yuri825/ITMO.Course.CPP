//������� 4. ����������� ������� ����� ����
//������������ ����������� ������� ���������� ����� ����
//S = 5 + 10 + 15 + � + 5�n,
//��� n > 0.

#include <iostream>

using namespace std;
int result = 0;
int getRekurce(int n)
{
	
	if(n < 0)
	{
		return result;
	}
	else
	{
		result = result + 5 * n;
		n--;
		getRekurce(n);
	}
}

void main()
{
	system("chcp 1251");
	int n;
	cout << "������� n" << endl;
	cin >> n;
	cout << getRekurce(n);
}
