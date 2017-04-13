/******************************************/
/* UVa 11349 Symmetric Matrix             */
/* Author: WootDylan3                     */
/* Date: 2017/04/13                       */
/* Time Limit:                            */
/******************************************/


/*
You're given a square matrix M. Elements of this matrix are Mij : {0 < i < n; 0 < j < n}. In this problem you'll have to find out whether the given matrix is symmetric or not.
Definition: Symmetric matrix is such a matrix that all elements of it are non-negative and symmetric with relation to the center of this matrix. Any other matrix is considered to be non-symmetric. For example:
M =
5 1 3
2 0 2
3 1 5
is symmetric
M =
5 1 3
2 0 2
0 1 5
is not symmetric, because 3!=0
All you have to do is to find whether the matrix is symmetric or not. Elements of a matrix given in the input are -2^32 <= Mij <= 2^32 and 0 < n <= 100.

Input
First line of input contains number of test cases T <= 300. Then T test cases follow each described in the following way. The first line of each test case contains n - the dimension of square matrix. Then n lines follow each of then containing row i. Row contains exactly n elements separated by a space character. j-th number in row i is the element Mij of matrix you have to process.

Output
For each test case output one line 'Test #t: S'. Where t is the test number starting from 1. Line S is equal to 'Symmetric' if matrix is symmetric and 'Non-symmetric' in any other case.

--------------------------------------------------------------------------------

Sample Input
2
N = 3
5 1 3
2 0 2
3 1 5
N = 3
5 1 3
2 0 2
0 1 5

Sample Output
Test #1: Symmetric.
Test #2: Non-symmetric.

--------------------------------------------------------------------------------
*/

/* C++ */
#include <iostream>
using namespace std;

int main()
{
	int nCase, N, a, count=1;
	char tmp, tmp2;
	cin >> nCase;
	while (nCase--){
		int skip=0, i, j;
		cin >> tmp  >> tmp2 >> N;
		int m[100][100];
		for (j=0; j<N; j++){
			for (i=0; i<N; i++){
				cin >> a;
				m[i][j]=a;
			}
		}
		for (i=0; i<N; i++){
			for (j=0; j<N-1; j++){
				if ((m[i][j]!=m[N-1-i][N-1-j])||(m[i][j]<0)){
					skip=1;
					break;
				}
			}
		}
		cout << "Test #" << count << ": ";
		if (skip==0){
			cout << "Symmetric." << endl;
		} else{
			cout << "Non-symmetric." << endl;
		}
		count++;
	}
}
