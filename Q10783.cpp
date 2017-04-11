/******************************************/
/* UVa 10783 Odd Sum                      */
/* Author: WootDylan3                     */
/* Date: 2017/04/11                       */
/* Time Limit: 3 sec                      */
/******************************************/


/*
Description
Given a range [a, b], you are to find the summation of all the odd integers in this range. For example, the summation of all the odd integers in the range [3, 9] is
3 + 5 + 7 + 9 = 24.

Input
There can be at multiple test cases. The first line of input gives you the number of test cases,T (1 ≤ T≤ 100). Then T test cases follow. Each test case consists of 2 integers a and b (0 a ≤ b ≤100) in two separate lines.

Output
For each test case you are to print one line of output - the serial number of the test case followed by the summation of the odd integers in the range [a, b].

--------------------------------------------------------------------------------

Sample Input  
2
1
5
3
5

Sample Output 
Case 1: 9
Case 2: 8

--------------------------------------------------------------------------------
*/

/* C++ */
#include <iostream>
using namespace std;

int main()
{
	int n, a, b, count=1;
	cin >> n;
	while (n--){
		int sum=0;
		cin >> a >> b;
		// if a is even number, a++
		if (a%2!=1){
			a+=1;
		}
		for (int i=a; i<=b; i+=2){
			sum+=i;
		}
		cout << "Case " << count << ": " << sum << endl;
		count++;
	}
}