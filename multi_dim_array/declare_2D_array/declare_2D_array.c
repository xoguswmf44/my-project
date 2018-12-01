#include <stdio.h>
#include <stdlib.h>

//2x4 배열 A를 선언하고 그 배열요소를 이용해 4x2 배열 B를 선언하는 프로그램
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