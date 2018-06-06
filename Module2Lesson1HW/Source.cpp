#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main() {
	setlocale(LC_ALL, "Rus");

	int n = 0;

	printf("������� ����� �������: ");
	scanf("%d", &n);

	if (n == 1) {
		printf("���� ����������� (����� ���������������) ����� � � ����� ������������� ����� d.��������� ������� q � ������� r ��� ������� a �� d \n");
		
		int a = 0, d = 0;
		int q = 0, r = 0;
		
		printf("������� ����� �: ");
		scanf("%d", &a);
		
		printf("������� ����� d: ");
		scanf("%d", &d);
		
		if (a > 0 && d > 0)
		{
			q = a / d;
			printf("������� ����� ����� %d \n", q);
			
			r = a%d;
			printf("������� ��� ������� ����� %d \n", r);
		}
		else
		{
			printf("��������� ������ �� �������� ������� ������� \n");
		}
	}
	else if (n == 2) {
		printf("2.	�������� ������� int f(int x, int y), ������� ���������� 0,���� �������� x � y ��� ����� ����, 12/x, ���� y ����� 0, 12/y, ���� x ����� 0, ����� 144/(x*y). \n");
		
		int x = 0, y = 0, f = 0;
		
		printf("������� �������� �: ");
		scanf("%d", &x);
		
		printf("������� �������� y: ");
		scanf("%d", &y);

		if (x == 0 && y == 0)
		{
			f = (x, y);
			printf("f=%d \n", f);
		}
		else if (y == 0)
		{
			f = 12 / x;
			printf("f=12/x=%d \n", f);
		}
		else if (x == 0)
		{
			f = 12 / y;
			printf("f=12/y=%d \n", f);
		}
		else
		{
			f = 144 / (x*y);
			printf("f=144 / (x*y)=%d \n", f);
		}
	}
	else if (n == 3) {
		printf("3.	�������� ������� int f(int x, int y), ������� ���������� x-y, ���� x ������ y, ����� ���������� y-x \n");
		
		int x = 0, y = 0, f = 0;
		
		printf("������� �������� �: ");
		scanf("%d", &x);
		
		printf("������� �������� y: ");
		scanf("%d", &y);

		if (x > y) 
		{
			f = x - y;
			printf("f=x-y=%d \n", f);
		}
		else
		{
			f = y - x;
			printf("f=y-x=%d \n", f);
		}
	}
	else if (n == 4) {
		printf("4.	�������� ������� double f(double x, double y), ������� ���������� x/y, ���� x ������ y,����� ���������� y/x. ��������������, ��� �������� ���������� ������ ����.\n");

		double f = 0, x = 0, y = 0;
		
		printf("������� �������� �: ");
		scanf("%lf", &x);
		
		printf("������� �������� y: ");
		scanf("%lf", &y);

		if (x > y && x > 0 && y > 0)
		{
			f = x / y;
			printf("f=x/y=%lf \n", f);
		}
		else
		{
			f = y / x;
			printf("f=y/x=%lf \n", f);
		}
	}
	else if (n == 5) {
		printf("5.	�������� ������� double f(double x, double y, double z), ������� ���������� m*n/k,��� k ���� ������� �� ����� x, y, z, � m � n ���� ������� � ������� �� ���� �����. \n");
		
		double f = 0, x = 0, y = 0, z = 0;
		double m = 0, n = 0, k = 0;
		
		printf("������� �������� �: ");
		scanf("%lf", &x);
		
		printf("������� �������� y: ");
		scanf("%lf", &y);
		
		printf("������� �������� z: ");
		scanf("%lf", &z);

		if (x < y && x < z)
		{
			k = x;
			printf("���������� �� ���� %lf \n", x);
		}
		else if (y < x && y < z)
		{
			k = y;
			printf("���������� �� ���� %lf \n", y);
		}
		else if (z < y && z < x)
		{
			k = z;
			printf("���������� �� ���� %lf \n", z);
		}
		
		m = (x + y + z) / 3;
		printf("������� ���� ����� ����� %lf \n", m);

		if (x > y && x > z)
		{
			n = x;
			printf("���������� ����� �� ���� %lf \n", x);
		}
		else if (y > x && y > z)
		{
			n = y;
			printf("���������� ����� �� ���� %lf \n", y);
		}
		else if (z > x && z > y)
		{
			n = z;
			printf("���������� ����� �� ���� %lf \n", z);
		}

		f = m*n / k;
		printf("f=%lf \n", f);
	}
	else if (n == 6) {
		printf("6.	�������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c. \n");

		int a = 0, b = 0, c = 0, f = 0;

		printf("������� ����� �= ");
		scanf("%d", &a);

		printf("������� ����� b= ");
		scanf("%d", &b);

		printf("������� ����� �= ");
		scanf("%d", &c);

		if (a < b && a < c) 
		{
			f = a;
			printf("���������� �� �������� %d \n", a);
		}
		else if (b < a && b < c)
		{
			f = b;
			printf("���������� �� �������� %d \n", b);
		}
		else
		{
			f = c;
			printf("���������� �� �������� %d \n", c);
		}
	}
	else if (n == 7) {
		printf("7.	�������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c. \n");

		int a = 0, b = 0, c = 0, f = 0;

		printf("������� ����� �= ");
		scanf("%d", &a);

		printf("������� ����� b= ");
		scanf("%d", &b);

		printf("������� ����� �= ");
		scanf("%d", &c);

		if (a > b && a > c)
		{
			f = a;
			printf("���������� �� �������� ����� %d \n", a);
		}
		else if (b > a && b > c)
		{
			f = b;
			printf("���������� �� �������� ����� %d \n", b);
		}
		else
		{
			f = c;
			printf("���������� �� �������� ����� %d \n", c);
		}
	}
	else if (n == 8) {
		printf("8.	�������� ������� bool f(int x, int y, int z), ������� ���������� true, ���� �2+�2= z2, ����� ���������� false. \n");

		int x = 0, y = 0, z = 0;
		bool f = 0;

		printf("x= ");
		scanf("%d", &x);

		printf("y= ");
		scanf("%d", &y);

		printf("z= ");
		scanf("%d", &z);

		if (pow(x, 2) + pow(y, 2) == pow(z, 2))
		{
			printf("True \n", f);
		}
		else
		{
			printf("False \n", f);
		}
	}
	else if (n == 9) {
		printf("9.	�������� ������� bool f(int x, int y), ������� ���������� true, ���� x ������� ������ �� y, ��� ��������, y ������� ������ �� x, ����� ���������� false. ��������������, ��� �������� ���������� ������ ����. \n");

		int x = 0, y = 0;
		bool f = 0;

		printf("������� ���� ����� ����� � ");
		scanf("%d", &x);

		printf("������� ���� ����� ����� y ");
		scanf("%d", &y);

		if (x > 0 && y > 0 && x%y == 0)
		{
			printf("True \n", f);
		}
		else if (x > 0 && y > 0 && y%x == 0)
		{
			printf("True \n", f);
		}
		else
		{
			printf("False \n", f);
		}
	}
	else if (n == 10) {
		printf("10.	������������� ����� x, y, z ����� ���� ��������� ������������, ���� ������� �� ��� ������ ����� ���� ������. �������� ������� bool f(int x, int y, int z), ������� ���������� true, ���� ����� x, y, z ����� ���� ��������� ������������, ����� ���������� false. ��������������, ��� �������� ���������� ������ ���� \n");

		int x = 0, y = 0, z = 0;
		bool f = 0;

		printf("������� x= ");
		scanf("%d", &x);

		printf("������� y= ");
		scanf("%d", &y);

		printf("������� z= ");
		scanf("%d", &z);

		if (x > y&& x > z&&x < y + z)
		{
			printf("X ����� ���� �������� ������������ \n", x);
		}
		else if (y > x && y > z && y < x + z)
		{
			printf("Y ����� ���� �������� ������������ \n", y);
		}
		else if (z > x && z > y && z < x + y)
		{
			printf("Z ����� ���� �������� ������������ \n", z);
		}
		else 
		{
			printf("False \n", f);
		}
	}
}