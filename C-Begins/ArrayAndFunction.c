#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

void InputInt(int A[], int n)
{
	int i;
	printf("Enter array elements:\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d ", &(A[i]));
	}
}
void InputDouble(double A[], int n)
{
	int i;
	printf("Enter array elements: ");
	for (i = 0; i < n; i++)
	{
		scanf_s("%lf ", &(A[i]));
	}
	printf("\n");
}
void PrintInt(int A[], int n)
{
	int i;
	printf("Array elements: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}
void PrintDouble(double A[], int n)
{
	int i;
	printf("Array elements: ");
	for (i = 0; i < n; i++)
	{
		printf("%.2lf ", A[i]);
	}
	printf("\n");
}
int arrayUnique(int A[], int n, int B[])
{
	int i, j, k, pos;
	B[0] = A[0];
	k = 1;
	for (i = 0; i < n; i++)
	{
		pos = -1;
		j = 0;
		while ((j < k) && (pos == -1))
		{
			if (A[i] == B[j]) pos = 1;
			else j++;
		}
		if (pos == -1)
		{
			B[k] = A[i];
			k++;
		}
	}
	return k;
}
int arrayUniqueBySorting(int A[], int n, int B[])
{

}


void main()
{
	int Array1[1000], n;
	int Array2[1000], k;

	n = 8;
	InputInt(Array1, n);
	//InputInt(Array2, k);
	k = arrayUnique(Array1, n, Array2);
	PrintInt(Array2, k);
}