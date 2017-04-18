/******************************************/
/* UVa 10931 Parity                       */
/* Author: WootDylan3                     */
/* Date: 2017/04/18                       */
/* Time Limit: 1 sec                      */
/******************************************/


/*
Description
We define the parity of an integer n as the sum of the bits in binary representation computed modulo two. As an example, the number 21 = 101012 has three 1s in its binary representation so it has parity 3 (mod 2), or 1.
In this problem you have to calculate the parity of an integer 1 ≤ I ≤ 2147483647.

Input
Each line of the input has an integer I and the end of the input is indicated by a line where I = 0 that should not be processed.

Output
For each integer I in the inputt you should print a line The parity of B is P (mod 2)., where B is the binary representation of I.

--------------------------------------------------------------------------------

Sample Input  
1
2
10
21
0

Sample Output 
The parity of 1 is 1 (mod 2).
The parity of 10 is 1 (mod 2).
The parity of 1010 is 2 (mod 2).
The parity of 10101 is 3 (mod 2).

--------------------------------------------------------------------------------
*/

/* C++ */
#include <iostream>
#include <vector>
using namespace std;

int parity(int a)
{
	int count=0,i=0;
	int bin[40];
	while (a>0){
		bin[i]=a%2;
		if (a%2==1){
			count++;
		}
		i++;
		a/=2;
	}
	for (i=i-1;i>=0;i--){
		cout << bin[i];
	}
	cout << " is " << count;
}
int main()
{
	int a;
	while ((cin >> a) && (a!=0)){
		cout << "The parity of ";
		parity(a);
		cout << " (mod 2)." << endl;
	}
}