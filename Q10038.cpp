/******************************************/
/* UVa 10038 Jolly Jumpers                */
/* Author: WootDylan3                     */
/* Date: 2017/04/11                       */
/* Time Limit: 3 sec                      */
/******************************************/


/*
Description
A sequence of n > 0 integers is called a jolly jumper if the absolute values of the difference between successive elements take on all the values 1 through n-1.For instance,
1 4 2 3
is a jolly jumper, because the absolutes differences are 3, 2, and 1 respectively. The definition implies that any sequence of a single integer is a jolly jumper. You are to write a program to determine whether or not each of a number of sequences is a jolly jumper.

Input
Each line of input contains an integer n <= 3000 followed by n integers representing the sequence.

Output
For each line of input, generate a line of output saying "Jolly" or "Not jolly".

--------------------------------------------------------------------------------

Sample Input  
4 1 4 2 3
5 1 4 2 -1 6

Sample Output 
Jolly
Not jolly

--------------------------------------------------------------------------------
*/

/* C++ */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, a;
	while(cin >> n >> a){
		int count, b, skip=0;
		vector<int> v;
		count=n;
		while(--count){
			cin >> b;
			v.push_back(abs(a-b));
			a=b;
		}
		sort(v.begin(), v.end());
		for (int i=1;i<n;i++){
			if (v[i-1]!=i){
				skip=1;
			}	
		}
		if (skip==0 || n==1){
			cout << "Jolly" << endl;
		} else {
			cout << "Not jolly" << endl;
		}
	}
}