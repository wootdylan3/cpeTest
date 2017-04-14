/******************************************/
/* UVa 11063 B2-Sequence                  */
/* Author: WootDylan3                     */
/* Date: 2017/04/14                       */
/* Time Limit:                            */
/******************************************/


/*
Description
A B2-Sequence is a sequence of positive integers 1 ≤ b1 < b2 < b3 ... such that all pairwise sums bi+bj, where i ≤ j, are diﬀerent. Your task is to determine if a given sequence is a B2-Sequence or not.

Input
Each test case starts with 2 ≤ N ≤ 100, the number of elements in a sequence. Next line will have N integers, representing the value of each element in the sequence. Each element bi is an integer such that bi ≤ 10000. There is a blank line after each test case. The input is terminated by end of ﬁle (EOF).

Output
For each test case you must print the number of the test case, starting from 1, and a message indicating if the corresponding sequence it is a B2-Sequence or not. See the sample output below. After each test case you must print a blank line.

--------------------------------------------------------------------------------

Sample Input  
4
1 2 4 8

4
3 7 10 14

Sample Output 
Case #1: It is a B2-Sequence.

Case #2: It is not a B2-Sequence.

--------------------------------------------------------------------------------
*/

/* C++ */
#include <iostream>
using namespace std;

int main()
{
	int n, b, caseN=1;
	while ((cin >> n)&&(n>1)){
		int a[10000], sum[10000];
		int count=0, count2=0, skip=0;
		while (n--){
			cin >> b;
			a[count]=b;
			count++;
		}
		for(int i=0;i<count;i++){
			for (int j=0;j<i;j++){
				sum[count2]=a[i]+a[j];
				count2++;
			}
		}
		for(int i=0;i<count2;i++){
			for (int j=0;j<i;j++){
				if (sum[i]==sum[j]){
					skip=1;
					break;
				}
			}
		}
		if (skip==0){
			cout << "Case #" << caseN << ": It is a B2-Sequence.";
		} else{
			cout << "Case #" << caseN << ": It is not a B2-Sequence.";
		}
		caseN++;
		cout << endl << endl;
	}
}
