#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{

	char* locale = setlocale(LC_ALL, "");

	int a, b, result;

	printf("Введите число: ");
	scanf("%d", &a);
	result = 0;

	printf("Введите число на которое вы хотите умножить: ");
	scanf("%d", &b);

	if (b > 0 && a != 0)
	{
		for (; 0 != b; b--)
		{
			result += a;
		}
	}
	else if (b < 0 && b != 0)
	{
		for (; 0 != b; b++)
		{
			result += -a;
		}

	}
	else if (a == 0 && b == 0) {
		result = 0;
	}

	printf("Результат умножения %d", result);
}

int mainTwo()
{
	char* locale = setlocale(LC_ALL, "");
	int Array[10];
	int Chetnoe = 0;
	int Nechetnoe = 0;

	for (int i = 0; i < 10; i++)
	{
		printf("Введите число которое вы хотите добавить: ");
		scanf("%d", &Array[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (Array[i] % 2 == 0) {
			Chetnoe += 1;
		}
		else {
			Nechetnoe += 1;
		}
	}

	printf("Количество четных чисел: %d ", Chetnoe);
	printf("Количество нечетных чисел: %d ", Nechetnoe);
	return 0;
}

int origin()
{

	char* locale = setlocale(LC_ALL, "");

	int a, b;
	double result;

	printf("Введите число: ");
	scanf("%d", &a);
	result = a;
	int Proverka = 1; // а Хотел ведь использовать тип bool

	printf("Введите степень в которую вы хотите возвести число: ");
	scanf("%d", &b);

	if (b > 0 && a != 0)
	{
		for (; 1 != b; b--)
		{
			result *= a;
		}
	}
	else if (b < 0 && b != 0)
	{
		for (; 0 != b; b++)
		{
			if (b + 1 != 0)
				result *= a;
			else
				result = 1 / result;
		}

	}
	else if (b == 0 && a != 0) {
		result = 1;
	}
	else {
		printf("Результат возведения в степень не определен");
		Proverka = 0;
	}

	if (Proverka == 1)
		printf("Результат возведения в степень %f", result);
}

int mainYo(void)
{
	char name[30];
	puts("Enter name: ");

	fgets(name, 30, stdin);


	for (int i = 0; i < 30; i++) {
		if (name[i] == '?')
		{
			name[i] = '!';
		}
	}

	printf("Your name: %s", name);
	return 0;
}