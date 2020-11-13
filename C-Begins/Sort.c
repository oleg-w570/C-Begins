#define _USE_MATH_DEFINES
#include "stdio.h"
#include "stdbool.h"
#include "math.h"

void randArray(int A[], int n, int a, int b)
{
	int i;
	for (i = 0; i < n; i++)
	{
		A[i] = rand() % (b - a) + a;
	}
}

void print(int A[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}

void bubbleSort(int A[], int n)
{
	int i, j, temp;
	bool wasSwap;

	do
	{
		wasSwap = false;
		for (i = 1; i < n; i++)
		{
			if (A[i] < A[i - 1])
			{
				temp = A[i - 1];
				A[i - 1] = A[i];
				A[i] = temp;
				wasSwap = true;
			}
		}
		n--;
	} while ((n > 2) && (wasSwap));
}

void menu() 
{
	printf("\nMENU\n");
	printf("1. Input\n");
	printf("2. Print\n");
	printf("3. BubbleSort\n");
	printf("4. QuickSort\n");
	printf("0. Exit\n");
}

void main()
{
	int Arr[100], n, t;
	bool wasInput = false;
	n = 10;

	printf("Start\n");
	do
	{
		menu();
		scanf_s("%d", &t);
		srand(100);

		switch (t)
		{
		case 1: {
			randArray(Arr, n, -10, 10);
			wasInput = true;
			print(Arr, n);
			break;
		}
		case 2: {
			if (wasInput)
				print(Arr, n);
			else
				printf("Please, input array\n");
			break;
		}
		case 3: {
			if (wasInput)
				bubbleSort(Arr, n);
			else
				printf("Please, input array\n");
			print(Arr, n);
			break;
		}
		case 4: {
			break;
		}
		case 0: {
			break;
		}
		default:
			printf("Error\n");
			break;
		}
	} while (t != 0);
}