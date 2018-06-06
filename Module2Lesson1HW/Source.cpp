#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main() {
	setlocale(LC_ALL, "Rus");

	int n = 0;

	printf("Введите номер задания: ");
	scanf("%d", &n);

	if (n == 1) {
		printf("Дано натуральное (целое неотрицательное) число а и целое положительное число d.Вычислить частное q и остаток r при делении a на d \n");
		
		int a = 0, d = 0;
		int q = 0, r = 0;
		
		printf("Введите число а: ");
		scanf("%d", &a);
		
		printf("Введите число d: ");
		scanf("%d", &d);
		
		if (a > 0 && d > 0)
		{
			q = a / d;
			printf("Частное чисел равно %d \n", q);
			
			r = a%d;
			printf("Остаток при делении чисел %d \n", r);
		}
		else
		{
			printf("Введенные данные не подходят условию задания \n");
		}
	}
	else if (n == 2) {
		printf("2.	Напишите функцию int f(int x, int y), которая возвращает 0,если значения x и y оба равны нулю, 12/x, если y равен 0, 12/y, если x равен 0, иначе 144/(x*y). \n");
		
		int x = 0, y = 0, f = 0;
		
		printf("Введите значение х: ");
		scanf("%d", &x);
		
		printf("Введите значение y: ");
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
		printf("3.	Напишите функцию int f(int x, int y), которая возвращает x-y, если x больше y, иначе возвращает y-x \n");
		
		int x = 0, y = 0, f = 0;
		
		printf("Введите значение х: ");
		scanf("%d", &x);
		
		printf("Введите значение y: ");
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
		printf("4.	Напишите функцию double f(double x, double y), которая возвращает x/y, если x больше y,иначе возвращает y/x. Предполагается, что значения параметров больше нуля.\n");

		double f = 0, x = 0, y = 0;
		
		printf("Введите значение х: ");
		scanf("%lf", &x);
		
		printf("Введите значение y: ");
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
		printf("5.	Напишите функцию double f(double x, double y, double z), которая возвращает m*n/k,где k есть меньшее из чисел x, y, z, а m и n есть среднее и большее из этих чисел. \n");
		
		double f = 0, x = 0, y = 0, z = 0;
		double m = 0, n = 0, k = 0;
		
		printf("Введите значение х: ");
		scanf("%lf", &x);
		
		printf("Введите значение y: ");
		scanf("%lf", &y);
		
		printf("Введите значение z: ");
		scanf("%lf", &z);

		if (x < y && x < z)
		{
			k = x;
			printf("Наименьшее из трех %lf \n", x);
		}
		else if (y < x && y < z)
		{
			k = y;
			printf("Наименьшее из трех %lf \n", y);
		}
		else if (z < y && z < x)
		{
			k = z;
			printf("Наименьшее из трех %lf \n", z);
		}
		
		m = (x + y + z) / 3;
		printf("Среднее этих чисел равно %lf \n", m);

		if (x > y && x > z)
		{
			n = x;
			printf("Наибольшее число из трех %lf \n", x);
		}
		else if (y > x && y > z)
		{
			n = y;
			printf("Наибольшее число из трех %lf \n", y);
		}
		else if (z > x && z > y)
		{
			n = z;
			printf("Наибольшее число из трех %lf \n", z);
		}

		f = m*n / k;
		printf("f=%lf \n", f);
	}
	else if (n == 6) {
		printf("6.	Напишите функцию int f(int a, int b, int c), которая возвращает наименьшее из значений a, b, c. \n");

		int a = 0, b = 0, c = 0, f = 0;

		printf("Введите число а= ");
		scanf("%d", &a);

		printf("Введите число b= ");
		scanf("%d", &b);

		printf("Введите число с= ");
		scanf("%d", &c);

		if (a < b && a < c) 
		{
			f = a;
			printf("Наименьшее из значений %d \n", a);
		}
		else if (b < a && b < c)
		{
			f = b;
			printf("Наименьшее из значений %d \n", b);
		}
		else
		{
			f = c;
			printf("Наименьшее из значений %d \n", c);
		}
	}
	else if (n == 7) {
		printf("7.	Напишите функцию int f(int a, int b, int c), которая возвращает наибольшее из значений a, b, c. \n");

		int a = 0, b = 0, c = 0, f = 0;

		printf("Введите число а= ");
		scanf("%d", &a);

		printf("Введите число b= ");
		scanf("%d", &b);

		printf("Введите число с= ");
		scanf("%d", &c);

		if (a > b && a > c)
		{
			f = a;
			printf("Наибольшее из значений равно %d \n", a);
		}
		else if (b > a && b > c)
		{
			f = b;
			printf("Наибольшее из значений равно %d \n", b);
		}
		else
		{
			f = c;
			printf("Наибольшее из значений равно %d \n", c);
		}
	}
	else if (n == 8) {
		printf("8.	Напишите функцию bool f(int x, int y, int z), которая возвращает true, если х2+у2= z2, иначе возвращает false. \n");

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
		printf("9.	Напишите функцию bool f(int x, int y), которая возвращает true, если x делится нацело на y, или наоборот, y делится нацело на x, иначе возвращает false. Предполагается, что значения параметров больше нуля. \n");

		int x = 0, y = 0;
		bool f = 0;

		printf("Введите чему будет равен х ");
		scanf("%d", &x);

		printf("Введите чему будет равен y ");
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
		printf("10.	Положительные числа x, y, z могут быть сторонами треугольника, если большее из них меньше суммы двух других. Напишите функцию bool f(int x, int y, int z), которая возвращает true, если числа x, y, z могут быть сторонами треугольника, иначе возвращает false. Предполагается, что значения параметров больше нуля \n");

		int x = 0, y = 0, z = 0;
		bool f = 0;

		printf("Введите x= ");
		scanf("%d", &x);

		printf("Введите y= ");
		scanf("%d", &y);

		printf("Введите z= ");
		scanf("%d", &z);

		if (x > y&& x > z&&x < y + z)
		{
			printf("X может быть стороной треугольника \n", x);
		}
		else if (y > x && y > z && y < x + z)
		{
			printf("Y может быть стороной треугольника \n", y);
		}
		else if (z > x && z > y && z < x + y)
		{
			printf("Z может быть стороной треугольника \n", z);
		}
		else 
		{
			printf("False \n", f);
		}
	}
}