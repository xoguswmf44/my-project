#include <stdio.h>
#include <stdlib.h>

//2���� �迭�� �����Ͽ� 2,3,4���� �����ϴ� ���α׷�

void printTwoArr(int arr[][9], int row, int col)
{	
	int i, j;
	for (i=0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");
}

int main()
{
	int arr[3][9];
	int i, j;
	int arrLen = sizeof(arr) / sizeof(int);

	for (i = 2; i < 5; i++) {
		for (j = 1; j < 10; j++) {
			arr[i - 2][j - 1] = i * j;
		}
	}
	
	printTwoArr(arr, 3, 9);
	return 0;
}