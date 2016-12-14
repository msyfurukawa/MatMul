#include <stdio.h>

//macro for output matrix
#define PRINT_MAT(M, nrow, ncol) printf(#M " =\n"); out_mat(M, nrow, ncol)

void out_mat(double *M, int nrow, int ncol);
void mul_mat(double *A, double *B, double *C, int n, int m, int l);

int main(){
	//size of matrixes
	int n = 3, m = 4, l = 2;

	//n * m matrix
	double A[12] = { 7, 1, 5, 3,
					4, 5, 9, 5,
					5, 9, 2, 4 };
	PRINT_MAT(A, n, m);

	//m * l matrix
	double B[8] = { 3, 2,
					4, 1,
					9, 7,
					6, 7};
	PRINT_MAT(B, m, l);

	//n * l matrix (result of multiplication)
	double C[6];

	mul_mat(A, B, C, n, m, l);
	PRINT_MAT(C, n, l);

	return 0;
}
