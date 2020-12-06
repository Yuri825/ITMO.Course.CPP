// ������� 1. ������ ������� ������� ������
//��������� �������� ��������� ��� ���������� ������� ��������� �������������, ��������� ��� ��������� ��� ������� :
//�������� ������ : ���������� ������ �������������(�������� ������� ��������������).
//��� ������� ������ ������� ������������ ����� ������������ : ������� �������� ������� �������������, � ����� �� �������.
//��� ������� ������ � ������� ������������ ������������ ��������� ��������������� �������.����� ������ ������� ����� ���������� �� ��������� ������� :
//,
//��� xb, yb � xc, yc ���������� ���� ����� �������.
//������� ������������ �� ���� �������� ������������ � ���������� 3 ������������� ������� 1.

#include <iostream>
using namespace std;

double getSide()
{
	double xb, yb, xc, yc, result;
	// ������ ���������� �������
	cout << "������� ���������� xb\n";
	cin >> xb;
	cout << "������� ���������� yb\n";
	cin >> yb;
	cout << "������� ���������� xc\n";
	cin >> xc;
	cout << "������� ���������� yc\n";
	cin >> yc;

	result = sqrt((pow((xb - xc), 2)) + (pow((yb - yc), 2)));
	return result;
}

double getSquareTriangle()
{
	double p, a, b, c, result;

	getSide();
	cin >> a;
	getSide();
	cin >> b;
	getSide();
	cin >> c;

	p = 0.5 * (a + b + c);
	result = round(sqrt(p * (p - a) * (p - b) * (p - c)) * 100) / 100;
	return result;
}

void main()
{
	system("chcp 1251");
	// ���������� ��� �������� �������� �������������
	double sqr1, sqr2, sqr3;

	sqr1 = getSquareTriangle();
	sqr2 = getSquareTriangle();
	sqr3 = getSquareTriangle();

	cout << sqr1 + sqr2 + sqr3;
	
}
