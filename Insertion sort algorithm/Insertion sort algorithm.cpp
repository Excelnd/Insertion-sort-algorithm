// Insertion sort algorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void InsertionSort(int A[], int n)
{
	int i, key, j;
	for (int i = 1; i < n; i++)
	{
		key = A[i];
		j = i-1;

		while (j >= 0 && A[j] > key)
		{
			A[j+1] = A[j];
			j = j - 1;
		}
		A[j+1] = key;
	}
}

int main()
{
	int A[] = { 2,8,7,4,5,3,1 };
	int n = sizeof(A) / sizeof(A[0]);
	InsertionSort(A, n);
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";
	return 0;
}
