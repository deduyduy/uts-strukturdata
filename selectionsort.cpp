#include <iostream>
using namespace std;

void selectionsort (int arr[], int n)
{
	int i , j , mi n_ i dx;
	for (i = 0; i < n - 1; i++){
		mi n _ i dx = i ;
		for (j = i + 1; j < n; j++){
			if (arr[j] < arr [mi n_ i dx])
				mi n_i dx= j;
		}
		if (min_idx != i)
			swap (arr [mi n_i dx], arr[i]);
	}
}
void cetak (int arr[], int size)
{
	int i; 
	for (i = 0; i < size; i++){
		cout << arr [i] << " ";
		cout << endl;
	}
}
int main ()
{
	int arr [] = { 64, 25, 12, 22, 11 };
	int n = sizeof (arr) / sizeof (arr[0]);
	selection sort (arr, n)
	cetak (arr, n)
	return 0;
}
