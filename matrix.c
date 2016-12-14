#include <stdio.h>

/*
 * output matrix M (nrow * ncol)
 */
void out_mat(double *M, int nrow, int ncol){
	int i, j;
	for(i = 0; i < nrow; i++){
		for(j = 0; j < ncol; j++) printf("%lf\t", M[i*ncol+j]);
		printf("\n");
	}
}

/*
 * multiply A * B and store the result in C
 * A should be n * m, B should be m * l and C should be n * l
 */
void mul_mat(double *A, double *B, double *C, int n, int m, int l){
	int i, j, k;
	double tmp;
	for(i = 0; i < n; i++){
		for(j = 0; j < l; j++){
			tmp = 0;
			for(k = 0; k < m; k++) tmp += A[i*m+k] * B[k*l+j];
			C[i*l+j] = tmp;
		}
	}
}
