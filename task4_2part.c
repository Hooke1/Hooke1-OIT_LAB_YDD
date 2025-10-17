#include <stdio.h>
#include <Windows.h>

}
void def422()
{
	int i = 1;
	do {
		int j = 1;
		do {
			printf("%d\t", i * j);
			j = j + 1;
		} while (j <= 10);
		printf("\n");
		i = i + 1;
	} while (i <= 10);
	printf("\nконец операции\n\n");
}
void def423()
{
	int i = 1;
	int j = 5;
	while (i <= 5)
	{
		int t = 1;
		while (t <= j) {
			printf("%d ", 5);
			t = t + 1;
		}
		printf("\n");
		j = j - 1;
		i = i + 1;
	}
	printf("\nконец операции\n\n");
}


void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = -1;

	while (n != 0)
	{
		printf("Выберите необходимую операцию:\n");
		printf("1 - вывод индексов элементов матрицы n * m\n");
		printf("2 - вывод таблицы Пифагора\n");
		printf("3 - вывод рисунка по вариантам 4.2.3\n");
		printf("4 - вывод рисунка по вариантам 4.2.4\n");

		printf("0 - выход\n");
		printf("\n");
		scanf_s("%d", &n);

		switch (n)
		{
		case 1:
			int i;
			int j;
			printf("n = ");
			scanf_s("%d", &i);
			printf("m = ");
			scanf_s("%d", &j);

			def421(i, j);
			break;
		case 2:
			def422();
			break;
		case 3:
			def423();
			break;
		case 4:
			def424();
			break;
		}
	}
}