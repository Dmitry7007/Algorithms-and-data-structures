#include <iostream>
using namespace std;

/*��������� �������� ��������� y = an�x^(n) + an - 1�x^(n - 1) + ... + ai�x^(i) + ... + a1�x^(1) + a0, 
��� ��� ������ � ����� �����. ������������ an, an-1, ... , ai,�, a1, a0 ��������
������� ������� �������������� ����������, ������������ q � ������
��������� � d � ��������� ����� ��������� ����������. �������� q, d, n, x �������� � ����������.*/

/*for () {
		for (int i = 1; i < n; i++)
		{

		}
		x *=
		y=q*x
	}*/

int ZnachenieVirajeniya(int q, int d, int n, int x)
{
	int y = 0;
	int temp = x;

	for (int i = 1; i < n; i++)
	{
		x *= temp;
	}

	for (int i = 0; i <= n; i++)
	{
		y += q * x;
		x /= temp;
		q = q + d;
	}

	return y;
}

int main()
{    
	setlocale(LC_ALL, "Rus");

	int q, d, n, x;

	cout << "������� ������ ������� �������������� ����������: " << endl;
	cin >> q;
	cout << "������� �������� �������� ����� ��������� ���������: " << endl;
	cin >> d;
	cout << "������� �������� ���������� ������� �������: " << endl;
	cin >> n;
	cout << "������� �������� X: " << endl;
	cin >> x;

	cout << "�������� �������� �����: " << ZnachenieVirajeniya(q, d, n, x) << endl;

	return 0;
}
