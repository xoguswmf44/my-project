#include <stdio.h>
#include <stdlib.h>

//2x4 �迭 A�� �����ϰ� �� �迭��Ҹ� �̿��� 4x2 �迭 B�� �����ϴ� ���α׷�
int main()
{
	int row, col;
	int A[2][4] = {
		{1,2,3,4},
	    {5,6,7,8}
	};

	int B[4][2];

	for (row = 0; row < 4; row++) {
		for (col = 0; col < 2; col++) {
			B[row][col] = A[col][row];
			printf("%d ", B[row][col]);
		}

		printf("\n");
	}

	return 0;
}