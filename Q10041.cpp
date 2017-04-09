/******************************************/
/* UVa 10041 Vito's Family                */
/* Author: WootDylan3                     */
/* Date: 2012/03/18                       */
/* Time Limit: 3 sec                      */
/******************************************/


/*
Background
The world-known gangster Vito Deadstone is moving to New York. He has a very big family there, all of them living in Lamafia Avenue. Since he will visit all his relatives very often, he is trying to find a house close to them.

Description
Vito wants to minimize the total distance to all of them and has blackmailed you to write a program that solves his problem.

Input
The input consists of several test cases. The first line contains the number of test cases.
For each test case you will be given the integer number of relatives r ( 0 < r < 500) and the street numbers (also integers)   where they live ( 0 < si < 30000 ). Note that several relatives could live in the same street number.

Output
For each test case your program must write the minimal sum of distances from the optimal Vito's house to each one of his relatives. The distance between two street numbers si and sj is dij= |si-sj|.

--------------------------------------------------------------------------------

Sample Input  
2
2 2 4 
3 2 4 6

Sample Output 
2
4

--------------------------------------------------------------------------------
*/

/* C++ */
#include <iostream>
#include <vector>		// for vector use
#include <algorithm>	// for sort use
using namespace std;
vector<int> addr;

int main()
{
	int i, a, b, c;
	// test case
	cin >> a;
	while (a--) {
		int sum=0;
		// number of neighbors
		cin >> b;
		addr.clear();
		for (i=0;i<b;i++) {
			// location of neighbors
			cin >> c;	
			addr.push_back(c);
		}
		// sort
		sort(addr.begin(), addr.end());
		// middle number
		int mid=addr[b/2];
		for (i=0;i<b;i++) {
			sum+=abs(addr[i]-mid);
		}
		cout << sum << endl;
	}
}