// Lab_03_3.cpp
// < ������ ������ >
// ����������� ������ � 3.3
// ������������ , ������ �������� ������� .
// ������ 14

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������

	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= -4)
		y = -2;
	else
		if (-4 < x && x <= 0)
			y = x / 4;
		else
			if (0 < x && x <= 2)
				y = (x * x);
			else
				y = (10 - x) / 2;
	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;
}